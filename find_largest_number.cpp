#include <string>
#include<iostream>
using namespace std;

int find_largest_number(string n, int digit1, int digit2) {
    int digits[2] = {digit1, digit2};

    for (int i = 0; i < 2; i++){
        char digit = '0' +digits[i];
        string result = "";
        bool placed = false;
        
        for (int j = 0; j < (int)n.length(); j++) {
            if (!placed && n[j] < digit) {
                result += digit;
                placed = true;
            }
            result += n[j];
        }

        if (!placed) {
            result += digit;
        }

        n = result;
    }

    return stoi(n);
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
