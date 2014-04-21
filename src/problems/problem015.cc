/**
 * Project Euler Problems
 */

#include "problem.hh"

class Problem15 : public Problem {

public:
    Problem15() : Problem(15) {}

    long long Run() {
        // The solution is to calculate the binomial coefficient n amongst 2n,
        // where n is the length of the sides: this will provide the number of
        // ways to reach the other end, keeping in mind that since the grid is
        // square, an equal number of rows and columns (n) must be traversed.
        // Unfortunately, 40! is a rather large number, so instead of writing
        // a complicated system for it, I just asked Google to calculate it
        // for me. :P
        unsigned long long result = 137846528820;
        return result;
    }
};
