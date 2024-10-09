#include <iostream>
using namespace std;

class Matrix {
private:
    int rows, cols;
    int matrix[10][10];

public:
    void inputMatrix(int r, int c) {
        rows = r;
        cols = c;
        cout << "Enter the elements of the matrix (" << rows << "x" << cols << "):" << endl;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << "Element [" << i << "][" << j << "] = ";
                cin >> matrix[i][j];
            }
        }
    }

    void displayMatrix() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << "   " << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }

    Matrix addMatrix(Matrix &m) {
        Matrix result;
        if (rows == m.rows && cols == m.cols) {
            result.rows = rows;
            result.cols = cols;
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    result.matrix[i][j] = matrix[i][j] + m.matrix[i][j];
                }
            }
        } else {
            cout << "Matrices cannot be added due to dimension mismatch!" << endl;
        }
        return result;
    }

    Matrix subtractMatrix(Matrix &m) {
        Matrix result;
        if (rows == m.rows && cols == m.cols) {
            result.rows = rows;
            result.cols = cols;
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    result.matrix[i][j] = matrix[i][j] - m.matrix[i][j];
                }
            }
        } else {
            cout << "Matrices cannot be subtracted due to dimension mismatch!" << endl;
        }
        return result;
    }

    Matrix multiplyMatrix(Matrix &m) {
        Matrix result;
        if (cols == m.rows) {
            result.rows = rows;
            result.cols = m.cols;
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < m.cols; j++) {
                    result.matrix[i][j] = 0;
                    for (int k = 0; k < cols; k++) {
                        result.matrix[i][j] += matrix[i][k] * m.matrix[k][j];
                    }
                }
            }
        } else {
            cout << "Matrices cannot be multiplied due to dimension mismatch!" << endl;
        }
        return result;
    }

    Matrix transposeMatrix() {
        Matrix result;
        result.rows = cols;
        result.cols = rows;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.matrix[j][i] = matrix[i][j];
            }
        }
        return result;
    }
};

int main() {
    Matrix mat1, mat2, result;
    int choice, r1, c1, r2, c2;
    char contn;

    cout << "Enter the number of rows for Matrix 1: ";
    cin >> r1;
    cout << "Enter the number of columns for Matrix 1: ";
    cin >> c1;
    mat1.inputMatrix(r1, c1);

    cout << "Enter the number of rows for Matrix 2: ";
    cin >> r2;
    cout << "Enter the number of columns for Matrix 2: ";
    cin >> c2;
    mat2.inputMatrix(r2, c2);

    cout << "\nMatrix Operations Menu:" << endl;
    cout << " 1. Addition" << endl;
    cout << " 2. Subtraction" << endl;
    cout << " 3. Multiplication" << endl;
    cout << " 4. Transpose of Matrix 1" << endl;
    cout << " 5. Transpose of Matrix 2" << endl;
    
    do {
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        switch (choice) {
            case 1:
                result = mat1.addMatrix(mat2);
                cout << "Result of matrix addition:" << endl;
                result.displayMatrix();
                break;

            case 2:
                result = mat1.subtractMatrix(mat2);
                cout << "Result of matrix subtraction:" << endl;
                result.displayMatrix();
                break;

            case 3:
                result = mat1.multiplyMatrix(mat2);
                cout << "Result of matrix multiplication:" << endl;
                result.displayMatrix();
                break;

            case 4:
                result = mat1.transposeMatrix();
                cout << "Transpose of Matrix 1:" << endl;
                result.displayMatrix();
                break;

            case 5:
                result = mat2.transposeMatrix();
                cout << "Transpose of Matrix 2:" << endl;
                result.displayMatrix();
                break;

            default:
                cout << "Invalid choice!" << endl;
                break;
        }
        cout << "Do you want to continue(Y/N): ";
        cin >> contn;
    }
    while(contn == 'Y' || contn == 'y');

    cout << "Program terminated successfully..." << endl;

    return 0;
}
