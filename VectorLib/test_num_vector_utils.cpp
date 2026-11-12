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
    vector<int> odds = {1, 3, 5, 7};
    vector<int> evens = only_evens(nums);
    string expected = "2 4 6 8 12 14 22";
    
    CHECK(render_num_vector(evens) == expected);
    CHECK(render_num_vector(only_evens(odds)) == "");
}

TEST_CASE("Testing only_odds") {
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    vector<int> odds = only_odds(nums);
    string expected = "1 3 5 7 9 11 13";    
    vector<int> evens = {2, 4, 6, 8,};

    CHECK(render_num_vector(odds) == expected);
    CHECK(render_num_vector(only_odds(evens)) == "");
}

TEST_CASE("Testing nums_between function") {
    vector<int> nums = {11, 2, 13, 4, 10, 26, 7, 88, 19, 20, 14, 5, 32};
    vector<int> nums2 = nums_between(nums, 10, 20);
    string expected = "11 13 10 19 20 14";
    CHECK(render_num_vector(nums2) == expected);
}
