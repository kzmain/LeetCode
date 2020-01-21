#include <iostream>
#include <set>


class Solution {
public:
    bool buddyStrings(std::string A, std::string B) {
        if(A.size() != B.size()) return false;
        if(A == B){
            std::sort(A.begin(), A.end());
            for(int i = 1; i < A.size(); i++) if(A[i] == A[i - 1])return true;
            return false;
        }
        int pos1 = -1, pos2 = -1;
        for(int i = 0; i < A.size(); i++){
            //Try to find at least two different chars
            if(A[i] != B[i]){if(pos1==-1){pos1 = i;}else{pos2 = i; break;}}
        }
        //A and B only have one different char
        if(pos1 == -1)     return false;
        else if(pos2 == -1)return false;
        //A and B have two different chars
        else{
            A[pos1] += A[pos2];
            A[pos2] =  A[pos1] - A[pos2];
            A[pos1] -= A[pos2];
            return A == B;
        }
    }
};

int main(){
    Solution so;
    std::cout<<so.buddyStrings("aaaaaaabc", "aaaaaaacb")<<" ";
    std::cout<<so.buddyStrings("cabc", "cabc")<<" ";
    std::cout<<so.buddyStrings("abca", "bcaa")<<" ";
}