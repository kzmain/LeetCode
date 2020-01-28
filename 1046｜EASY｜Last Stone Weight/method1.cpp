#include <iostream>
#include <vector>

class Solution {
public:
    int lastStoneWeight(std::vector<int>& stones) {
        int s = stones.size();
        std::sort(stones.begin(), stones.end());
        while(s > 1){
            if(stones[s - 1] == stones[s - 2]){
                stones.resize(s - 2);
            }
            else{
                stones[s - 2] = stones[s - 1] - stones[s - 2];
                stones.resize(s - 1);
                std::sort(stones.begin(), stones.end());
            }
            s = stones.size();
        }
        if(s == 0) return 0;
        else return stones[0];
    }
};

int main(){
    Solution so;
    std::vector<int> v1=  {2,7,4,1,8,1};
    std::cout<<"Should be : 1 . Result: "<<so.lastStoneWeight(v1)<<std::endl;
}