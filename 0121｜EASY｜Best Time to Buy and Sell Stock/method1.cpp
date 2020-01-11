#include <vector>
#include <iostream>
#include <algorithm>

#include <vector>
#include <iostream>
#include <algorithm>

class Solution {
public:
   int maxProfit(std::vector<int>& prices) {
       if(prices.empty()) return 0;
       for(int index = 0; index < (long) prices.size() -1 ; index++) prices[index] = prices[index + 1] - prices[index];
       prices.pop_back();
       int max = INT_MIN, sum = 0;
       for(auto num : prices){
           if(sum > 0) sum += num;
           else        sum = num;
           max = max > sum ? max : sum;
       }
       return std::max(max, 0);
   }
};


int main(){
   Solution so = Solution();
   auto test_case = std::vector<int>{7,1,5,3,6,4};
   so.maxProfit(test_case);
}




