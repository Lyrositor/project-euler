# Project Euler Problems

set(PROBLEMS_HEADERS
    problem.hh
    problems.hh
)

set(PROBLEMS_SOURCES
    problems.cc

    problem1.cc
    problem2.cc
)

add_library(problems STATIC ${PROBLEMS_SOURCES} ${PROBLEMS_HEADERS})
