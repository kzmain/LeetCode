# Palindrome Number intro:
Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.

Example 1:
```
Input: 121
Output: true
```

Example 2:
```
Input: -121
Output: false
```
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

Example 3:
```
Input: 10
Output: false
```
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.

Follow up:
Coud you solve it without converting the integer to a string?


##Note:
1. k_palindrome_number_1.cpp
	对称数正反应该都是一样的数字，把每一位拆解开来，正序和倒序对比 (只用对比到中心点)，如果有不一样的返回false，如果都一样返回true

	Pro: 不管是 int, long, long long 都可以拆解开来
	Con: 使用std::list<short> 大大的减缓了速度

2. k_palindrome_number_2.cpp
	取反转数字，对比反转数字是否与正序数字相等。

	Pro: 不实用stl，只有数字运算速度极快
	Con: 如果输入为long long 则程序会崩溃

# Appendix
https://leetcode.com/problems/palindrome-number/