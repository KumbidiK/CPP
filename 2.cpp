#include <iostream>
using namespace std;

class Book {
    int BookID;
    string BookName;
    double BookPrice;

    double total_cost(int n) {
        return BookPrice * n;
    }

public:
    void input() {
        cout<<"Enter Book ID, Book name and Book Price: "<<endl;
        cin >> BookID >> BookName >> BookPrice;
    }

    void display() {
        cout << BookID << " " << BookName << " " << BookPrice << "\n";
    }

    void purchase() {
        int n;
        cout<<"Enter No.of copies: "<<endl;
        cin >> n;
        cout <<"Total : "<< total_cost(n) << "\n";
    }
};

int main() {
    Book b1, b2, b3;
    b1.input();
    b2.input();
    b3.input();

    b1.display();
    b1.purchase();

    b2.display();
    b2.purchase();

    b3.display();
    b3.purchase();

}
