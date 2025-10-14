#include <iostream>
using namespace std;

class Rectangle {
    int length;
    int width;

public:
    Rectangle() {
        length = 0;
        width = 0;
    }

    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    void display() {
        cout << "Length: " << length << ", Width: " << width << "\n";
    }

    ~Rectangle() {
        cout << "Rectangle object destroyed\n";
    }
};

int main() {
    Rectangle r1;
    Rectangle r2(10, 5);

    r1.display();
    r2.display();

}
