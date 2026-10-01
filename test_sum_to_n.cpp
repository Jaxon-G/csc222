#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
using namespace std;

// Your function goes here
double sum_to_n(int n) {
    if (n == 0) {
        return 1;
    } else {
        return 0;
    }
}



TEST_CASE("sum_to_n(int n) returns sum of integers from 1 to n") {
    CHECK(sum_to_n(3) == 6);
    CHECK(sum_to_n(7) == 28);
    CHECK(sum_to_n(1) == 1);
    CHECK(sum_to_n(42) == 903);
}

