#include <iostream>
using namespace std;

class Rectangle {
    int length,width;

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
        cout << "Length: " << length << ", Width: " << width << endl;
    }

    ~Rectangle() {
        cout << "Rectangle  destroyed "<< endl;
    }
};

int main() {
    int len,wid;
    Rectangle r1;
    cout<< "Enter length and width of rectangle 2: ";
    cin>>len>>wid;
    Rectangle r2(len,wid);

    r1.display();
    r2.display();

}
