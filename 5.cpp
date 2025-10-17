#include <iostream>
using namespace std;

class Area {
public:
   
    float findArea(int radius) {
        return 3.14159 * radius * radius;
    }

    
    float findArea(float side) {
        return side * side;
    }

   
    float findArea(float length, float width) {
        return length * width;
    }

    
    float findArea(float base, float height, int type) {
        return 0.5 * base * height;
    }
};

int main() {
    Area a;

    int radius;
    cout<<"Enter radius of circle : ";
    cin >> radius;
    cout << "Area of Circle: " << a.findArea(radius) <<endl;

    float side;
    cout<<"Enter side of square : ";
    cin >> side;
    cout << "Area of Square: " << a.findArea(side) << endl;

    float length, width;
    cout<<"Enter length and width of rectangle : ";
    cin >> length >> width;
    cout << "Area of Rectangle: " << a.findArea(length, width) <<endl;

    float base, height;
    cout<<"Enter base and height of triangle : ";
    cin >> base >> height;
    cout << "Area of Triangle: " << a.findArea(base, height, 0) << endl;
  
}
