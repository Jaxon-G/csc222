#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include <doctest.h>
using namespace std;

// Your function goes here
string mock(string s) {
    return "oKaY";
}

TEST_CASE("mock turns a string into a SpongeBob meme") {
    CHECK(mock("We are learning C++.") == "wE aRe lEaRnInG c++.");
    CHECK(
        mock("I'm not sure how to do this.") ==
        "i'M nOt SuRe hOw To Do ThIs."
    );
    CHECK(mock("Mississippi") == "mIsSiSsIpPi");
}
