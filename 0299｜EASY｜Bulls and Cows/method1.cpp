#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
#include <set>

class Solution {
public:
    std::string getHint(std::string secret, std::string guess) {
        std::map<char, int> g_map;
        for(auto c : guess){
            if(g_map.find(c) == g_map.end()) g_map[c] = 1;
            else g_map[c]++;
        }
        int B = 0, A = 0;
        for(auto c : secret){
            if(g_map.find(c) != g_map.end() && g_map[c] != 0){
                g_map[c]--;
                B ++;
            }
        }
        for(int i = 0; i < (int)secret.size(); i++){
            if(secret[i] == guess[i]){
                B--;
                A++;
            }
        }
        return std::to_string(A) + "A" + std::to_string(B)+"B";
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(i,j);
 */


int main(){
    auto so = Solution();
    std::cout<<so.getHint("1807", "7810")<<std::endl;
    std::cout<<so.getHint("1123", "0111")<<std::endl;
    std::cout<<so.getHint("11", "10")<<std::endl;
}