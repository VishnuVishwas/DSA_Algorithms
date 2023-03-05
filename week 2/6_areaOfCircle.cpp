#include <iostream>
using namespace std;

float circleArea (float radius) {
    return 2*3.14*radius*radius;
}

int main () {
    float radius = 3.111;

    // funtion call
    float area = circleArea(radius);

    cout << "Area of circle is : " << area;
}