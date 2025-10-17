#include <iostream>
using namespace std;

class Car {
    string brand;
    string model;
    int year;
public:
    void read() {
        cout << "Enter car brand,model and year: ";
        cin >> brand >> model >> year;
    }
    void display() {
        cout << "Brand: "<< brand <<endl;
        cout << "Model: "<< model <<endl;
        cout << "Year: " << year <<endl;
        cout << endl;
    }
};

int main() {
    Car c1, c2, c3;
    c1.read();
    c2.read();
    c3.read();
    c1.display();
    c2.display();
    c3.display();
}
