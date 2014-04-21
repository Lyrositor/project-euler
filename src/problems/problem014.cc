/**
 * Project Euler Problems
 */

#include "problem.hh"

class Problem14 : public Problem {

public:
    Problem14() : Problem(14) {}

    long long Run() {
        unsigned int length = 0;
        unsigned int length_longest = 0;
        unsigned long start_longest = 0;
        for (int i = 500000; i <= pow(10, 6); i++) {
            length = CollatzSequenceLength(i);
            if (length > length_longest) {
                length_longest = length;
                start_longest = i;
            }
        }
        return start_longest;
    }

    unsigned int CollatzSequenceLength(unsigned long start) {
        unsigned long term = start;
        unsigned int n = 0;
        while (term != 1) {
            if (term % 2 == 0)
                term = term / 2;
            else
                term = 3 * term + 1;
            n += 1;
        }
        return n;
    }
};
