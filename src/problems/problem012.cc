/**
 * Project Euler Problems
 */

#include "problem.hh"

class Problem12 : public Problem {

public:
    Problem12() : Problem(12) {}

    long Run() {
        const unsigned int req_divisors = 500;
        unsigned int num_divisors;
        unsigned int n = 1;
        unsigned int triangle_number;
        int i;

        while (true) {
            triangle_number = n * (n + 1) / 2;
            num_divisors = 0;
            for (i = 1; i < sqrt(triangle_number); i++)
                if (triangle_number % i == 0)
                    num_divisors += 2;
            if (num_divisors >= req_divisors)
                return triangle_number;
            n += 1;
        }
        
        return 0;
    }
};
