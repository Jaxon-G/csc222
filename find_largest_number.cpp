#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest.h>
#include <string>
using namespace std;

int find_largest_number(string n, int digit1, int digit2) {
    int result;

    for (int i = 0; i < n.length() - 1; i++) {
        for (int j = 0; j < n.length() - 1 - i; j++) {
            if (n[j]-'0' < n[j+1]-'0') {
                swap(n[j], n[j+1]);
            }
        }
    }

    for (int i = 0; i < n.length() - 1; i++) {
        if (n[i] < digit1)
    }

    return result;
}

int main() {
    
    string n;
    int digit1;
    int digit2;

    cout << "Enter a number: " << endl;
    cin >> n;

    cout << "Enter a digit: " << endl;
    cin >> digit1;

    cout << "Enter a digit: " << endl;
    cin >> digit2;

    cout << find_largest_number(n, digit1, digit2) << endl;
    
    return 0;
}

TEST_CASE("find_largest_number returns the largest number of 2 digits inserted into another number") {
    CHECK(find_largest_number(123, 5, 4) == 54123);
}
