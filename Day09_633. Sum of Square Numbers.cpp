// 17-06-2024
// Leetcode POTD:

// 633. Sum of Square Numbers
// CODE:

class Solution {
public:
    bool judgeSquareSum(int c) {
        long a = 0;     // to prevent overflow by square
        while (a * a <= c) {
            long bSquared = c - a * a;
            long b = sqrt(bSquared);
            if (b * b == bSquared) {
                return true;
            }
            a++;
        }
        return false;
    }
};
