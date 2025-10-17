#include <iostream>
using namespace std;

class bankaccount {
protected:
        int acc_number;
       float balance;

public:
    void setaccount(int accno, float bal) {
        acc_number = accno;
        balance = bal;
    }

    void deposit(float amount) {
        balance = balance + amount;
        cout<<"amount deposited successfully: "<<amount<<endl;
    }

    void withdraw(float amount) {
        if (amount >balance)
            cout<<"Insufficient balance.\n";
        else
            balance = balance - amount;
            cout<<"amount withdrawn successfully: "<<amount<<endl;
    }

    void display() {
        cout<<"Account Number: "<<acc_number<<endl;
        cout<<"Balance: "<<balance<<endl;
    }
};

class sav_account : public bankaccount {
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

class curr_account : public bankaccount {
private:
    float minimum_balance = 500;
    float service_charge = 50;

public:
    void setcurrent(int accno, float bal) {
        setaccount(accno, bal);
    }

    void serv_charge() {
        if (balance < minimum_balance) {
            balance = balance - service_charge;
            cout<<"Service charge of "<<service_charge<<" deducted.\n";
        } else {
            cout<<"No service charge.\n";
        }
    }

    void show() {
        serv_charge();
        display();
    }
};

int main() {
    sav_account s1;
    int n,m;
    float amount,amount2;
    s1.setsavings(2255, 1000, 5);
    cout<<"\nSavings Account Details:\n"<<endl;
    s1.show();
    
    cout<<"click 1 for deposit"<<endl;
    cout<<"click 2 for withdraw"<<endl;
    cin>>n;
    if(n==1){
        cout<<"deposit amount : ";
        cin>>amount;
        s1.deposit(amount);}
    else if(n==2){
        cout<<"withdraw amount : ";
        cin>>amount;
        if(amount<=1000){
            s1.withdraw(amount); }
        else{
            cout<<"insufficient balance"<<endl; }
    }
    else{
        cout<<"error"<<endl;
    }
    s1.show();
    curr_account c1;
    c1.setcurrent(2266, 400);
    cout<<"\nCurrent Account Details:\n"<<endl;
    c1.show();

cout<<"click 1 for deposit"<<endl;
    cout<<"click 2 for withdraw"<<endl;
    cin>>m;
    if(m==1){
        cout<<"deposit amount : ";
        cin>>amount2;
        c1.deposit(amount2);
    }
    else if(m==2){
        cout<<"withdraw amount : ";
        cin>>amount2;
        if(amount2<=400){
            c1.withdraw(amount2); }
        else{
            cout<<"insufficient balance"<<endl; }
    }
    else{
        cout<<"error"<<endl;
    }
    
    
    c1.show();

}
