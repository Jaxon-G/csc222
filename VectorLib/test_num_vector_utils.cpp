#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include <string>
#include <vector>
#include "num_vector_utils.h"
using namespace std;

TEST_CASE("Testing render_num_vector") {
    vector<int> nums = {1, 3, 7};
    string numstr = render_num_vector(nums);
    string expected = "1 3 7";
    CHECK(numstr == expected);

}

TEST_CASE("Testing render_num_vectors with other sizes") {
    vector<int> one = {5};
    vector<int> empty = {};
    vector<int> five = {5, 10, 15, 20, 25};

    CHECK(render_num_vector(one) == "5");
    CHECK(render_num_vector(empty) == "");
    CHECK(render_num_vector(five) == "5 10 15 20 25");
}

TEST_CASE("Testing num_vector_sum") {
    vector<int> nums = {1, 3, 7};
    vector<int> empty = {};
    vector<int> negative = {-3, -5, 5, 0};
    
    CHECK(11 == num_vector_sum(nums));
    CHECK(0 == num_vector_sum(empty));
    CHECK(-3 == num_vector_sum(negative));
}

TEST_CASE("Testing num_vector_product") {
    vector<int> nums = {2, 3, 7};
    vector<int> zero = {0, 4, 8};
    vector<int> negative = {-4, -2, -1};
    
    CHECK(42 == num_vector_product(nums));
    CHECK(0 == num_vector_product(zero));
    CHECK(-8 == num_vector_product(negative));
}   

TEST_CASE("Testing only_evens") {
    vector<int> nums = {1, 2, 3, 4, 6, 7, 8, 11, 12, 14, 27, 22};
    vector<int> evens = only_evens(nums);
    string expected = "2 4 6 8 12 14 22";
    CHECK(render_num_vector(evens) == expected);
}
