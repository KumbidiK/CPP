#include <iostream>
using namespace std;

class Time {
    int hours, minutes, seconds;
public:
    void input() {
        cout<<"Enter time: (Hours,Minutes,seconds)"<<endl;
        cin >> hours >> minutes >> seconds;
    }
    void display() {
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }
    friend Time sum(Time t1, Time t2);
};

Time sum(Time t1, Time t2) {
    Time temp;
    temp.seconds = t1.seconds + t2.seconds;
    temp.minutes = t1.minutes + t2.minutes + temp.seconds / 60;
    temp.seconds %= 60;
    temp.hours = t1.hours + t2.hours + temp.minutes / 60;
    temp.minutes %= 60;
    return temp;
}

int main() {
    Time t1, t2, t3;
    t1.input();
    t2.input();
    t3 = sum(t1, t2);
    t3.display();
}
