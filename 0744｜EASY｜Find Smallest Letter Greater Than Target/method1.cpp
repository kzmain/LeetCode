#include <iostream>
#include <vector>

class Solution {
public:
    char nextGreatestLetter(std::vector<char>& letters, char target) {
        for(auto c : letters) if(c - target > 0) return c;
        return letters[0];
    }
};


int main(){
    Solution so;
    std::vector<char> v1 = {'c', 'f', 'j'};
    std::cout<<"Should be : c Result: "<<so.nextGreatestLetter(v1, 'a')<<std::endl;
    std::cout<<"Should be : f Result: "<<so.nextGreatestLetter(v1, 'c')<<std::endl;
    std::cout<<"Should be : f Result: "<<so.nextGreatestLetter(v1, 'd')<<std::endl;
    std::cout<<"Should be : j Result: "<<so.nextGreatestLetter(v1, 'g')<<std::endl;
    std::cout<<"Should be : c Result: "<<so.nextGreatestLetter(v1, 'j')<<std::endl;
    std::cout<<"Should be : c Result: "<<so.nextGreatestLetter(v1, 'k')<<std::endl;
}