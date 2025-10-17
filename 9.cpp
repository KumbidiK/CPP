#include <iostream>
using namespace std;

class Matrix {
    int mat[10][10];
    int row, col;
public:
    void input() {
        cout << "Enter no of rows and columns: ";
        cin >> row >> col;
        cout << "Enter  elements: "<<endl;
        for (int i = 0; i < row; i++)
            for (int j = 0; j < col; j++)
                cin >> mat[i][j];
    }

    void display() {
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++)
                cout << mat[i][j] << " ";
            cout << "\n";
        }
    }

    Matrix operator+(const Matrix& m) {
        Matrix q;
        q.row = row;
        q.col = col;
        for (int i = 0; i < row; i++)
            for (int j = 0; j < col; j++)
                q.mat[i][j] = mat[i][j] + m.mat[i][j];
        return q;
    }
};

int main() {
    Matrix m1, m2, s;
    m1.input();
    m2.input();
    s = m1 + m2;
    cout << "Sum : "<<endl;
    s.display();
}
