/**
 * Project Euler Problems
 */

#include "problem.hh"

class Problem4 : public Problem {

public:
    Problem4() : Problem(4) {}

    long long Run() {
        unsigned int palindrome = 0;
        std::string number;
        for (unsigned int i = 100; i < 1000; i++)
            for (unsigned int j = i; j < 1000; j++) {
                number = std::to_string(i * j);
                if (number == std::string(number.rbegin(), number.rend()) && i * j > palindrome)
                    palindrome = i * j;
            }

        return palindrome;
    }
};
