/**
 * Project Euler Problems
 */

#include <ctime>
#include <iostream>
#include <sstream>

#include "problems/problems.hh"

int main (int argc, char** argv) {
    // Ensure the user has specified the problem's number.
    if (argc < 2) {
        std::cerr << "Please specify the problem's number." << std::endl;
        return 0;
    };
    unsigned int n;
    std::istringstream n_s(argv[1]);
    if (!(n_s >> n)) {
        std::cerr << "Not a valid problem number: " << argv[1] << std::endl;
        return 0;
    }
    
    Problems* problems = new Problems();

    // Check that the problem is available.
    if (!problems->IsProblemAvailable(n)) {
        std::cerr << "Problem #" << n << " isn't available." << std::endl;
        return 0;
    }
    
    // Run the problem's program.
    time_t start = time(NULL);
    std::cout << "Running Problem #" << n << std::endl;
    std::cout << "Answer: " << problems->Run(n) << std::endl;
    std::cout << "Running Time: " << difftime(time(NULL), start) << "s" << std::endl;

    return 0;
}
