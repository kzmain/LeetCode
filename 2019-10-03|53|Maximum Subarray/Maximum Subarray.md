# Maximum Subarray intro:
Given an integer array `nums`, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

**Example:**
```
Input: [-2,1,-3,4,-1,2,1,-5,4],
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
```

**Follow up:**

If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.




##Note:
1. maximum_subarray.cpp
	当 current_sum 小于0时加任何东西都不会比后面的数的和更大

# Appendix
https://leetcode.com/problems/maximum-subarray/