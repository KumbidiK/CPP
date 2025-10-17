#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int roll;
    string course;

public:
    void getDetails() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll no: ";
        cin >> roll;
        cout << "Enter course: ";
        cin >> course;
    }
};

class Test : virtual public Student {
protected:
    int mark1, mark2, mark3;

public:
    void getMarks() {
       cout << "Enter 3 marks: ";
       cin >> mark1 >> mark2 >> mark3;
    }
};

class GraceMarks : virtual public Student {
protected:
    int bonusMark;

public:
    void setBonus(int b) {
        bonusMark = b;
    }
};

class Result : public Test, public GraceMarks {
public:
    void displayResult() {
        int total = mark1 + mark2 + mark3 + bonusMark;
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<roll<<endl;
        cout<<"Course: "<<course<<endl;
        cout<<"Marks: "<<mark1<<", "<<mark2<<", "<<mark3<<endl;
        cout<<"Bonus Marks: "<<bonusMark<<endl;
        cout<<"Total Marks: "<<total<<endl;
    }
};

int main() {
    Result r;
    r.getDetails();
    r.getMarks();
    r.setBonus(5);
    r.displayResult();

}
