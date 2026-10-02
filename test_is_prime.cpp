#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
using namespace std;

// Your function goes here
bool is_prime(int n) {
    if (n <= 1) return false;

    if (n == 2) return true;

    if (n % 2 == 0) return false;

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }

    return true;
}


TEST_CASE("is_prime(int n) returns true if n is prime, false if not") {
    CHECK(is_prime(0)  == false);
    CHECK(is_prime(1)  == false);
    CHECK(is_prime(2)  == true);
    CHECK(is_prime(3)  == true);
    CHECK(is_prime(4)  == false);
    CHECK(is_prime(9)  == false);
    CHECK(is_prime(17) == true);
    CHECK(is_prime(25) == false);
}
