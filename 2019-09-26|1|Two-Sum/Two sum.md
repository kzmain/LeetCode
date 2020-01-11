# Two sum intro:
Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:
	Given nums = [2, 7, 11, 15], target = 9,
	Because nums[0] + nums[1] = 2 + 7 = 9,
	return [0, 1].

# Two sum notes:

1. two_sum_0.cpp (Brutal force)
	* Time complexity : O(n^2)
	For each element, we try to find its complement by looping through the rest of array which takes O(n) time. Therefore, the time complexity is O(n^2).

	* Space complexity : O(1).

	优点：对小内存有利
	缺点：每次查询都需要大量时间

2. two_sum_1.cpp (Two pass hash table)
	* Time complexity : O(n)
	We traverse the list containing nn elements exactly twice. Since the hash table reduces the look up time to O(1), the time complexity is O(n).
	
	* Space complexity : O(n)
	The extra space required depends on the number of items stored in the hash table, which stores exactly n elements.
	优点：如果重复查询多次，则只有一次存储时间，之后每次查询的速度都是O(1)
	缺点：需要大量空间储存

2. two_sum_2.cpp (One pass hash table)
	* Time complexity : O(n)
	We traverse the list containing nn elements exactly twice. Since the hash table reduces the look up time to O(1), the time complexity is O(n).
	
	* Space complexity : O(n)
	The extra space required depends on the number of items stored in the hash table, which stores **most** n elements.
	优点：如果重复查询多次，则只有一次存储时间，之后每次查询的速度都是O(1)，且在第一次查询时返回数据比two_sum_1.cpp快
	缺点：需要大量空间储存

# Appendix
https://leetcode.com/problems/two-sum/