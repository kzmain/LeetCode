#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<std::string> fizzBuzz(int n) {
        auto res = std::vector<std::string>{};
        int  loc = 1;
        while(!(loc > n)){
            if(  !(loc % 15))    res.emplace_back("FizzBuzz");
            else if(!(loc %  3)) res.emplace_back("Fizz");
            else if(!(loc %  5)) res.emplace_back("Buzz");
            else                 res.emplace_back(std::to_string(loc));
            loc++;
        }
        return res;
    }
};

int main(){
    Solution so;
//    auto t1 = std::vector<int>{3, 1, 2, 4};
//    auto t1 = std::vector<int>{};
//    auto t1 = std::vector<int>{3, 1, 2, 4, 5};
//    auto t1 = std::vector<int>{3, 1, 2, 4, 6};
//    auto t1 = std::vector<int>{4, 6};
//    auto t1 = std::vector<int>{1, 3};
    for(auto e : so.fizzBuzz(15)) std::cout<<e<<" ";
    std::cout<<std::endl;
}