#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int roll;
    string course;

public:
    void setStudent(string n, int r, string c) {
        name = n;
        roll = r;
        course = c;
    }
};

class Test : virtual public Student {
protected:
    int mark1, mark2, mark3;

public:
    void setMarks(int m1, int m2, int m3) {
        mark1 = m1;
        mark2 = m2;
        mark3 = m3;
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
    r.setStudent("Sahal", 19, "Physics");
    r.setMarks(60, 75, 69);
    r.setBonus(5);
    r.displayResult();

}
