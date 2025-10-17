#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
    int roll_number;
public:
    void inputDetails() {
        input();
        cout << "Enter roll number: ";
        cin >> roll_number;
    }
    void showDetails() {
        display();
        cout << "Roll Number: " << roll_number << endl;
    }
};

int main() {
    Student s;
    s.inputDetails();
    s.showDetails();
}
