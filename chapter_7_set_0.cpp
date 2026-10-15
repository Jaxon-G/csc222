#include <iostream>
using namespace std;

struct A
{
    char a;
    char b;
};

struct B
{
    char a;
    double b;
};

struct C
{
    A a;
    B b;
};

int main() {
    A a = {'a', 'A'};
    B b = {'B', 3.14};
    C c = {{'c', 'C'}, {'d', 4.9}};
    cout << "sizeof(a) is: " << sizeof(a) << endl;
    cout << "sizeof(b) is: " << sizeof(b) << endl;
    cout << "sizeof(c) is: " << sizeof(c) << endl;
    return 0;
}
