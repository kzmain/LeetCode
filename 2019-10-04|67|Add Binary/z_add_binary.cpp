#include <iostream>
#include <string>
#include <list>

std::string a_in = "100";
std::string b_in = "110010";

std::string addBinary(std::string a, std::string b) {
    std::string sshort;
    std::string slong;
    int res;
    int count = 0;
    int offset = 0;
    std::list<int> li;

    std::reverse(a.begin(), a.end());   //a - string
    std::reverse(b.begin(), b.end());
    sshort = a.size() <= b.size() ? a : b;
    slong =  a.size() > b.size() ? a : b;           // line 16-19  先翻转再赋值，因为后面会用到sshort/slong，要保证是翻转过后的string，不然输出会有问题问题

    for(; offset < sshort.size(); offset++){
        if(a[offset] == '0' && b[offset] == '0'){        //char - ''   string - " "
            li.push_back(0 + count);
            count = 0;
        }
        else if(a[offset] == '1' && b[offset] == '1'){
            li.push_back(0 + count);
            count = 1;
        }
        else {
            if(count == 0){
                li.push_back(1);
                count = 0;
            }
            else {
                li.push_back(0);
                count = 1;
            }
        }
    }
  //  auto debug1 = li;
    for(; offset < slong.size(); offset++){
        if(slong[offset] == '0'){
            li.push_back(0 + count);
            count = 0;
        }
        else{//slong[offset] == '1'
            if(count == 0) {        //  slong[offset] == 1  // /== 等于  = 赋值
                li.push_back(1);
                count = 0;
            }
            else {
                li.push_back(0);
                count = 1;
            }
        }

    }

    if(count == 1) li.push_back(1);

//    for(auto li : to_string(element)){}
    std::string result;
    li.reverse();    //list
    for(auto element : li) {         //auto 根据后面给的值自动声明其类型
        result += std::to_string(element);    //连接string，没有+=时，只输出了一位，每次覆盖前一位的结果
    }
    return result;  //string类型

    //for(auto elemt : stl) 此情况是iterate STL 按顺序每一位的element
    //常见STL: list, vector, map, set


    //list, vector, set 使用方法一样  我们假设 声明有元素的list/vector/set 为 demos
    //则使用方法为
    //for(auto ELEMENT_NAME: demos){
    // ELEMENT_NAME.....
    // }

    //map较为特殊，因为每一组为key,value对
    //for(auto ELEMENT_NAME: demos){
    //  ELEMENT_NAME.first //为调取key
    //  ELEMENT_NAME.second //为调取value
    // }

}


int main() {
    auto a =  addBinary(a_in,b_in);
    return 0;
}