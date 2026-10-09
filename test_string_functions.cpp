#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include <doctest.h>
using namespace std;

// Your function goes here
int count_words(string s){
    char space = ' ';
    int words = 0;
    
    if(s.length() == 0){
        return 0;
    }

    for (int i = 0; i < s.length(); i++){
        if(s[i] == space){
            words++;
       }
    }
    return words+1;
}

TEST_CASE("count_words counts words") {
    CHECK(count_words("") == 0);
    CHECK(count_words("Word!") == 1);
    CHECK(count_words("Thing1 and Thing2") == 3);
    CHECK(count_words("This is the song that never ends.") == 7);
}
