#include <iostream>
#include <map>
#include <list>

std::string in = "{{}";

bool isValid(std::string s) {
    if(s.size() % 2 == 1) return false;     //先行判断，不为偶数直接false
    std::map<char,int> value_map {
            {'(',1},
            {')',-1},
            {'{',2},
            {'}',-2},
            {'[',3},
            {']',-3}
    };

    //声明variable的方法
    //      TYPE NAME;
    //      TYPE NAME = VALUE;
    //      function return value -> VALUE
    //      TYPE NAME = fucntion(parameters);

    std::list<char> right_list;
    for(int i = 0; i < s.size(); i++){
        if(value_map.find(s[i]) == value_map.end()) return false;
        // find 找出的返回值，如不等于end的话，说明元素还在其中，如等于end，就该元素在list里没有，不存在
        if(value_map[s[i]] > 0)
            right_list.push_back(value_map[s[i]]);
        else{
            if(right_list.back() == abs(value_map[s[i]]))
                right_list.pop_back();    // pop -- 弹出 / stack
            else return false;
        }
    }
    //必须判断是否为空， 不为空直接false
    if(!right_list.empty()) return false;
    return true;
}


int main() {
//    std::cout << "Hello, World!" << std::endl;
    auto a = isValid(in);
    return 0;
}