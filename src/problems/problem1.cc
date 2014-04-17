/**
 * Project Euler Problems
 */

#include "problem1.hh"

void Problem1::Run() {
    unsigned int sum = 0;
    unsigned int max = 1000;

    sum += SumOfMultiples(3, max, false);
    sum += SumOfMultiples(5, max, false);
    sum -= SumOfMultiples(3 * 5, max, false);

    std::cout << "Answer: " << sum << std::endl;
}

unsigned int Problem1::SumOfMultiples(unsigned int number, unsigned int max, bool include) {
    unsigned int n = floor(max/number);
    unsigned int sum = (n + 1) * (number * n) / 2;
    if (n * number == max && !include && sum > 0)
        sum -= n * number;
    return sum;
}
