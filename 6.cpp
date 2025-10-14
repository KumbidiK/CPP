#include <iostream>
using namespace std;

class TelephoneBill {
    string name;
    string address;
    long long telNo;
    int numCalls;

public:
    void input() {
        cout<<"Enter Name,Address,Telephone no. and number of calls : "<<endl;
        cin >> name >> address >> telNo >> numCalls;
    }

    void display() {
        cout << "Name: " << name << "\n";
        cout << "Address: " << address << "\n";
        cout << "Telephone No.: " << telNo << "\n";
        cout << "Number of Calls: " << numCalls << "\n";
    }

    friend float computeBill(TelephoneBill t);
};

float computeBill(TelephoneBill t) {
    return t.numCalls * 2.0;
}

int main() {
    TelephoneBill t1;
    t1.input();
    t1.display();
    cout << "Total Amount to be Paid: Rs. " << computeBill(t1) << "\n";
    return 0;
}
