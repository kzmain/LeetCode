#include <iostream>
#include <vector>
#include <queue>

class Solution {
public:
    bool rotateString(std::string A, std::string B) {
        int sizeA = A.size(), sizeB = B.size();
        if(sizeA != sizeB) return false; else if(!sizeA) return true;
        std::queue<char> qA, qB;
        for(char a : A) qA.push(a);
        for(char b : B) qB.push(b);
        for(int i = 0; i < qA.size(); i++){
            qA.push(qA.front());
            qA.pop();
            if(qA == qB) return true;
        }
        return false;
    }
};

int main(){
    Solution so;
    std::cout<<"Should be : T  Result: "<<so.rotateString("abcde", "cdeab")<<std::endl;
    std::cout<<"Should be : F  Result: "<<so.rotateString("abcde", "abced")<<std::endl;
}