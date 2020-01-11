class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target){
     vector<int> sum;
     for (int i = 0; i < nums.size(); i++)
     {
         for (int j = i+1; j <= nums.size()-1; j++)
         {
             if (target == nums.at(i) + nums.at(j))
             {
                 sum.push_back(i);
                 sum.push_back(j);
              }
         }
     }
     return (sum);
 }
