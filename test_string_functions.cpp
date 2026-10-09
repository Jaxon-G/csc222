#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include <doctest.h>
using namespace std;

// Your function goes here
int count_vowels(string s) {
    int count = 0;
    string vowels = "aeiouAEIOU";
    for (int i = 0; i < s.length(); i++){
        if (s[i] == vowels[i]){
            count++;
        }
    }

    return count;
}

TEST_CASE("count_vowels counts lowercase vowels") {
    CHECK(count_vowels("") == 0);
    CHECK(count_vowels("xyz") == 0);
    CHECK(count_vowels("hello") == 2);
    CHECK(count_vowels("aeiou") == 5);
    CHECK(count_vowels("MISSISSIPPI") == 4);
}
