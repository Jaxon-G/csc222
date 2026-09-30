#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
using namespace std;

// Your function goes here
bool is_even(int x) {
  
    bool is_even = ((x % 2 == 0) ? true : false);
    
    return is_even;
}


TEST_CASE("is_even identifies even numbers") {
    CHECK(is_even(0) == true);
    CHECK(is_even(2) == true);
    CHECK(is_even(-4) == true);
    CHECK(is_even(1) == false);
    CHECK(is_even(-7) == false);
}
