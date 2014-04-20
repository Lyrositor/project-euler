# Project Euler Problems

set(PROBLEMS_HEADERS
    common.hh
    problem.hh
    problems.hh
)

set(PROBLEMS_SOURCES
    common.cc
    problems.cc

    problem001.cc
    problem002.cc
    problem003.cc
    problem004.cc
    problem005.cc
    problem006.cc
    problem007.cc
    problem008.cc
    problem009.cc
    problem010.cc
    problem011.cc
    problem012.cc
    problem013.cc
    problem014.cc
    problem015.cc
    problem016.cc
    problem017.cc
    problem018.cc
    problem019.cc
    problem020.cc
)

add_library(problems STATIC ${PROBLEMS_SOURCES} ${PROBLEMS_HEADERS})
