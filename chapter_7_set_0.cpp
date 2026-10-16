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

Point lower_right(const Rectangle& box) {
    Point result = {box.corner.x + box.width, box.corner.y - box.height};
    return result;
}

double find_area(const Rectangle& box) {
    return box.width * box.height;
}

int main(){
    Rectangle box = {{0.0, 0.0}, 100.0, 200.0};
    Point lr = lower_right(box);
    cout << lr.x << ", " << lr.y << endl;
    cout << find_area(box) << endl;
}
