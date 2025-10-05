/*
LeetCode Problem 1295: Find Numbers with Even Number of Digits

This solution is a "mathy" approach:
- Instead of converting numbers to strings, we just check their ranges.
- Numbers with 2, 4, 6, 8, or 10 digits have even lengths.
- So we increment the count if the number falls into these ranges.


Example:
Input: nums = [12, 345, 2, 6, 7896]
Output: 2
Explanation: 12 (2 digits) and 7896 (4 digits) have even number of digits.
*/



class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0; // This is our “even-digit counter” 😎
        for(int i : nums) {
            if(i >= 10 && i <= 99) count++;          // 2 digits ✅
            else if(i >= 1000 && i <= 9999) count++; // 4 digits ✅
            else if(i >= 100000 && i <= 999999) count++; // 6 digits ✅
            else if(i >= 10000000 && i <= 99999999) count++; // 8 digits ✅
            else if(i >= 1000000000) count++;        // 10 digits ✅
        }
        return count; 
    }
};
