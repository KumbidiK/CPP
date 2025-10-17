#include <iostream>
using namespace std;

class Matrix {
    int mat[10][10];
    int row, col;
public:
    void input() {
        cout << "Enter rows and columns: ";
        cin >> row >> col;
        cout << "Enter matrix elements:\n";
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
        Matrix temp;
        temp.row = row;
        temp.col = col;
        for (int i = 0; i < row; i++)
            for (int j = 0; j < col; j++)
                temp.mat[i][j] = mat[i][j] + m.mat[i][j];
        return temp;
    }
};

int main() {
    Matrix m1, m2, sum;
    m1.input();
    m2.input();
    sum = m1 + m2;
    cout << "Sum of matrices:\n";
    sum.display();
}
