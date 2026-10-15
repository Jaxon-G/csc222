#include <iostream>
#include <cmath>
using namespace std;

struct Point {
    double x, y;
};

struct Rectangle {
    Point corner;          // upper left corner
    double width, height;
};

