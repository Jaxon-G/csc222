#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include <doctest.h>
using namespace std;

// Your function goes here
bool is_palindrome(string s){
    if (s.length() <= 1){
        return true;
    }
    
    for (int i = 0; i < s.length() / 2; i++){
        if (s[i] != s[s.length()-1-i]){
            return false;
        }
    }
    return false;
}

TEST_CASE("is_palindrome detects palindromes") {
    CHECK(is_palindrome("") == true);
    CHECK(is_palindrome("a") == true);
    CHECK(is_palindrome("aba") == true);
    CHECK(is_palindrome("abba") == true);
    CHECK(is_palindrome("abc") == false);
}
