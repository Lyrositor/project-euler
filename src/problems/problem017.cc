/**
 * Project Euler Problems
 */

#include "problem.hh"

class Problem17 : public Problem {

public:
    Problem17() : Problem(17) {}

    long long Run() {
        const unsigned int units[] = {
            0,  // [None]
            3,  // One
            3,  // Two
            5,  // Three
            4,  // Four
            4,  // Five
            3,  // Six
            5,  // Seven
            5,  // Eight
            4   // Nine
        };
        const unsigned int tens[] = {
            0,  // [None]
            3,  // Ten
            6,  // Twenty
            6,  // Thirty
            5,  // Forty
            5,  // Fifty
            5,  // Sixty
            7,  // Seventy
            6,  // Eighty
            6   // Ninety
        };
        const unsigned int teens[] = {
            3,  // Ten
            6,  // Eleven
            6,  // Twelve
            8,  // Thirteen
            8,  // Fourteen
            7,  // Fifteen
            7,  // Sixteen
            9,  // Seventeen
            8,  // Eighteen
            8,  // Nineteen
        };
        const unsigned int hundred = 7;  // Hundred
        const unsigned int thousand = 8; // Thousand
        const unsigned int max = 1000;
        const unsigned int and_l = 3;
        unsigned int sum = 0;
        unsigned int hundreds = 0;

        for (unsigned int i = 1; i < max; i++) {
            // Hundreds
            hundreds = units[(int) floor(i / 100)];
            if (hundreds > 0) {
                hundreds += hundred;
                if (i % 100 != 0)
                    hundreds += and_l;
            }
            sum += hundreds;

            // Tens
            if (i % 100 >= 10 && i % 100 < 20)
                sum += teens[i % 10];
            else
                sum += tens[(int) floor((i % 100) / 10)] + units[i % 10];
        }
        sum += units[1] + thousand;

        return sum;
    }
};
