#include <iostream>
using namespace std;

inline float areaCircle(float r) {
    return 3.14159 * r * r;
}

inline float areaSquare(float side) {
    return side * side;
}

inline float areaRectangle(float length, float width) {
    return length * width;
}

inline float areaTriangle(float base, float height) {
    return 0.5 * base * height;
}

int main() {
    float r, side, length, width, base, height;

    cout<<"Enter raduis of circle: ";
    cin >> r;
    cout << areaCircle(r) << "\n";
    
    cout<<"Enter side of square: ";
    cin >> side;
    cout << areaSquare(side) << "\n";

    cout<<"Enter length and width of rectangle: ";
    cin >> length >> width;
    cout << areaRectangle(length, width) << "\n";

    cout<<"Enter length and width of triangle: ";
    cin >> base >> height;
    cout << areaTriangle(base, height) << "\n";

}
