/**
 * Project Euler Problems
 */

#include "problem.hh"

class Problem16 : public Problem {

public:
    Problem16() : Problem(16) {}

    long long Run() {
        const unsigned int n = 1000;
        unsigned long sum = 0;
        unsigned char prev_carry, next_carry;
        unsigned char digits[500] = {};
        digits[0] = 1;

        for (unsigned int k = 0; k < n; k++) {
            prev_carry = 0;
            for (int i = 0; i < 500; i++) {
                next_carry = (digits[i] * 2 - digits[i] * 2 % 10) / 10;
                digits[i] = digits[i] * 2 % 10 + prev_carry;
                prev_carry = next_carry;
            }
        }

        for (int i = 0; i < 500; i++)
            sum += digits[i];

        return sum;
    }
};
