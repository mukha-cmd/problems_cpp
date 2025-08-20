cmake_minimum_required(VERSION 4.0)
project(LeetCodeCpp)

set(CMAKE_CXX_STANDARD 20)

add_executable(LeetCodeCpp main.cpp
        problems/arrays/addTwoInts.cpp
        problems/arrays/runningSum.cpp
        problems/arrays/richestCustomer.cpp
        problems/arrays/fizzBuzz.cpp
        problems/math/numberToZero.cpp
        problems/strings/stringMerge.cpp
        problems/strings/FindDifference.cpp
        problems/strings/FindBigDifference.cpp
        problems/strings/HaystackAndNeedle.cpp
        problems/strings/isAnagram.cpp
        problems/strings/repeatedSubStr.cpp
)
add_executable(richest problems/arrays/richestCustomer.cpp)
add_executable(steps problems/math/numberToZero.cpp)
add_executable(merge problems/strings/stringMerge.cpp)
add_executable(diff problems/strings/FindDifference.cpp)
add_executable(bigdiff problems/strings/FindBigDifference.cpp)
add_executable(haystack problems/strings/HaystackAndNeedle.cpp)
add_executable(repeated problems/strings/repeatedSubStr.cpp)