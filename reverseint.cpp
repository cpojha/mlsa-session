// 7. Reverse Integer
// Solved
// Medium
// Topics
// Companies
// Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

// Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 

// Example 1:

// Input: x = 123
// Output: 321
// Example 2:

// Input: x = -123
// Output: -321
// Example 3:

// Input: x = 120
// Output: 21
 

// Constraints:

// -231 <= x <= 231 - 1

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int reverse(int x) {
    string str = to_string(x);
    if (x < 0)
    {
        reverse(str.begin() + 1, str.end());
    }
    else
    {
        reverse(str.begin(), str.end());
    }
    try
    {
        return stoi(str);
    }
    catch (...)
    {
        return 0;
    }
}
