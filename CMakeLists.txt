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
        problems/arrays/moveZeroes.cpp
        problems/arrays/AnsFromPermutation.cpp
        problems/arrays/BallsAndBoxes.cpp
        problems/dp/ClimbingStairs.cpp
        problems/dp/PascalTriangle.cpp
        problems/dp/MaxProfit.cpp
        problems/dp/CountingBits.cpp
        problems/dp/isSubstring.cpp
        problems/dp/MinCostClimbingStairs.cpp
        problems/dp/Tribonacci.cpp
        problems/math/plusOne.cpp
        problems/math/addBinary.cpp
        problems/math/sqrtX.cpp
        problems/dp/MinPathSum.cpp
        problems/graph/FindTownJudge.cpp
        problems/graph/centerOfStar.cpp
)
add_executable(richest problems/arrays/richestCustomer.cpp)
add_executable(steps problems/math/numberToZero.cpp)
add_executable(merge problems/strings/stringMerge.cpp)
add_executable(diff problems/strings/FindDifference.cpp)
add_executable(bigdiff problems/strings/FindBigDifference.cpp)
add_executable(haystack problems/strings/HaystackAndNeedle.cpp)
add_executable(repeated problems/strings/repeatedSubStr.cpp)
add_executable(ans problems/arrays/AnsFromPermutation.cpp)
add_executable(conc problems/arrays/ArrConcatenation.cpp)
add_executable(boxes problems/arrays/BallsAndBoxes.cpp)
add_executable(prof problems/dp/MaxProfit.cpp)
add_executable(sub problems/dp/isSubstring.cpp)
add_executable(tri problems/dp/Tribonacci.cpp)
add_executable(max problems/dp/MaximumRepeatingSub.cpp)
add_executable(reverse problems/recursion/reverseString.cpp)
add_executable(roman problems/math/romanTranslate.cpp)