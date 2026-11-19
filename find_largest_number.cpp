#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include <string>
using namespace std;

int find_largest_number(string n, int digit1, int digit2) {
    return 1;
}

int main() {
    return 0;
}

TEST_CASE("find_largest_number returns the largest number of 2 digits inserted into another number") {
    CHECK(find_largest_number(123, 5, 4) == 54123);
}
