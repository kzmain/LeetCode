# Reverse Integer intro:
Given a 32-bit signed integer, reverse digits of an integer.

Example 1:
```
Input: 123
Output: 321
```
Example 2:
```
Input: -123
Output: -321
```
Example 3:
```
Input: 120
Output: 21
```
# Reverse Integer notes:
没有特别的笔记 挺简单的？（打脸了，没考虑溢出）
1. MAX_INT = 2,147,483,647
但其反整数 R_MAX_INT (746,384,741,2)>>MAX_INT 不能够储存在int中 


Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−2^31,  2^31 − 1]. For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.
因为给的数是10进制，转换成2进制后还是有溢出风险，所以需要判定。MAX_INT = 2^31-1 = 2147483647， MIN_INT = -2^31 = -2147483648
# Appendix
https://leetcode.com/problems/reverse-integer/