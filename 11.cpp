#include <iostream>
using namespace std;

class bankaccount {
protected:
    int account_number;
    float balance;

public:
    void setaccount(int accNo, float bal) {
        account_number = accNo;
        balance = bal;
    }

    void deposit(float amount) {
        balance += amount;
        cout<<"amount deposited successfully: "<<amount<<endl;
    }

    void withdraw(float amount) {
        if (amount >balance)
            cout<<"Insufficient balance.\n";
        else
            balance -= amount;
            cout<<"amount withdrawn successfully: "<<amount<<endl;
    }

    void display() {
        cout<<"Account Number: "<<account_number<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};

class savingsaccount : public bankaccount {
private:
    float rate_of_interest;

public:
    void setsavings(int accNo, float bal, float roi) {
        setaccount(accNo, bal);
        rate_of_interest = roi;
    }

    void calculateinterest() {
        float interest = balance * rate_of_interest / 100;
        cout<<"Interest: "<<interest<<endl;
    }

    void show() {
        display();
        calculateinterest();
    }
};

class currentaccount : public bankaccount {
private:
    float minimum_balance = 500;
    float service_charge = 50;

public:
    void setcurrent(int accNo, float bal) {
        setaccount(accNo, bal);
    }

    void servicecharge() {
        if (balance < minimum_balance) {
            balance -= service_charge;
            cout<<"Service charge of "<<service_charge<<" deducted.\n";
        } else {
            cout<<"No service charge.\n";
        }
    }

    void show() {
        servicecharge();
        display();
    }
};

int main() {
    savingsaccount s1;
    s1.setsavings(1001, 1000, 5);
    cout<<"\nSavings Account Details:\n"<<endl;
    s1.show();
    s1.deposit(100);
    s1.withdraw(200);
    s1.show();
    currentaccount c1;
    c1.setcurrent(2001, 400);
    cout<<"\nCurrent Account Details:\n"<<endl;
    c1.show();
    c1.deposit(100);
    c1.withdraw(200);
    c1.show();

}
