#include <iostream>
#include <vector>
#include <set>


class Solution {
public:
    bool buddyStrings(std::string A, std::string B) {
        if(A.size() != B.size()) return false;
        int pos1 = -1, pos2 = -1;
        for(int i = 0; i < A.size(); i++){
            //Try to find at least two different chars
            if(A[i] != B[i]) if(pos1==-1){pos1 = i;}else{pos2 = i; break;}
            //Two continues chars are the same
            else if(i + 1 < A.size() and A[i] == A[i + 1]){return true;}
        }
        //Two string are totally the same
        if(pos1 == -1){
            std::sort(A.begin(), A.end());
            for(int i = 1; i < A.size(); i++) if(A[i - 1] == A[i]) return true;
            return false;
        }
        //A and B only have one different char
        else if(pos2 == -1){
            return false;
        }
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