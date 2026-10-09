#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include <doctest.h>
using namespace std;

// Your function goes here
string shout(string s){
    string new_string;
    for (int i = 0; i < s.length(); i++){
        new_string += toupper(s[i]);
    }
    new_string = new_string.substr(0, s.length()-1) + "!";
    return new_string;
}

TEST_CASE("shout turns an exclaimation into a demand") {
    CHECK(shout("Don't touch that.") == "DON'T TOUCH THAT!");
    CHECK(shout("Let's go.") == "LET'S GO!");
    CHECK(shout("Leave it there!") == "LEAVE IT THERE!");
    CHECK(shout("DO IT!") == "DO IT!");
    
}

