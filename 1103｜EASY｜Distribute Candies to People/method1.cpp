#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<int> distributeCandies(int candies, int num_people) {
        auto res = std::vector<int>{};
        int baseSum = (1 + num_people) * num_people / 2, sum = 0, nLine = 0, base = 0;
        while(sum + baseSum + nLine * num_people * num_people <= candies){
            sum += baseSum + nLine++ * num_people * num_people;
        }
        for(int i = 0; i < num_people; i++){
            res.push_back((int)((i + 1 + i + 1 + (nLine - 1) * num_people) * nLine / 2));
        }
        candies -= sum;
        base = 1 + (nLine) * num_people;
        for(int i = 0; candies; i++){
            if(candies >= base + i){candies -= base + i; res[i] += base + i;}else{res[i] += candies; candies = 0;}
        }
        return res;
    }
};

int main() {
    Solution so;
//    so.distributeCandies(20, 3);
    so.distributeCandies(10,3);
    return 0;
}
