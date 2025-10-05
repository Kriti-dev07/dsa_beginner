// LeetCode 202: Happy Number
// https://leetcode.com/problems/happy-number/
// Difficulty: Easy

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> seen;  // to store numbers we've already encountered

        while (n != 1) {
            if (seen.count(n)) 
                return false;     // cycle detected -> not a happy number like for 4 4 → 16 → 37 → 58 → 89 → 145 → 42 → 20 → 4 → ...
            seen.insert(n);

            int sum = 0;
            while (n > 0) {
                int digit = n % 10;
                sum += digit * digit;
                n /= 10;
            }
            n = sum;  // move to the next number in the sequence
        }

        return true;  // reached 1 -> happy number
    }
};

int main() {
    Solution solution;

    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (solution.isHappy(n))
        cout << n << " is a Happy Number 🎉" << endl;
    else
        cout << n << " is NOT a Happy Number 😢" << endl;

    return 0;
}
