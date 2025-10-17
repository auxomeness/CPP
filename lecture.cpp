#include<iostream>
// #include<graphics.h>
using namespace std;

struct Point {
    double x, y;
};

struct Line {
    Point p1, p2;
};

int main() {

    Point point, point1;
    point.x = 10;
    point.y = 20;
    cout << "The Point X is: " << point1.x << endl;
    cout << "The Point y is: " << point1.y << endl;


    return 0;
}