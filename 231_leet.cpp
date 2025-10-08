/*
LeetCode 231: Power of Two ⚡

Goal:
Check if a number is a power of two — like 1, 2, 4, 8, 16, 32... you get the vibe 😄

Logic:
- If n <= 0 → definitely false (can’t have negative or zero power of two 🙃)
- While n is divisible by 2 → keep dividing it
- If after all divisions we end up with 1 → yup, it's a power of two 


This is the classic beginner approach:
Keep chopping n by 2 until you can't anymore.
*/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0) return false;   // 0 and negatives can't be powers of two 
        while (n % 2 == 0) {        //while divisible by 2
            n /= 2;                
        }
        return n == 1;              // if we ended up with 1 → it's a power of two
    }
};
