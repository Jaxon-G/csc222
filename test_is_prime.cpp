#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
using namespace std;

// Your function goes here
bool is_prime(int n) {
    if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0 || n % 9 == 0) {
        return false;
    } else {
        return true;
    }


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
