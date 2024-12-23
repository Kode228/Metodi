#include <iostream>
#include <cmath> 

using namespace std;

void printMatrix(double** matrix, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout.precision(2);
            cout << fixed << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << "-----------------------" << endl;
}

// Функция Гаусса
double* gauss(double** A, double* b, int n) {

    double** extendedMatrix = new double* [n];
    for (int i = 0; i < n; ++i) {
        extendedMatrix[i] = new double[n + 1];
        for (int j = 0; j < n; ++j) {
            extendedMatrix[i][j] = A[i][j];
        }
        extendedMatrix[i][n] = b[i];
    }

    // Прямx ой ход (Элиминация)
    for (int i = 0; i < n; i++) {

        int maxRow = i;
        for (int k = i + 1; k < n; k++) {
            if (fabs(extendedMatrix[k][i]) > fabs(extendedMatrix[maxRow][i])) {
                maxRow = k;
            }
        }
        if (maxRow != i) {
            double* temp = extendedMatrix[i];
            extendedMatrix[i] = extendedMatrix[maxRow];
            extendedMatrix[maxRow] = temp;
        }
        if (fabs(extendedMatrix[i][i]) < 1e-9) {
            cout << "Система не имеет единственного решения или бесконечное множество решений." << endl;
            for (int i = 0; i < n; ++i) {
                delete[] extendedMatrix[i];
            }
            delete[] extendedMatrix;
            return nullptr;
        }

        for (int k = i + 1; k < n; k++) {
            double factor = extendedMatrix[k][i] / extendedMatrix[i][i];
            for (int j = i; j <= n; j++) {
                extendedMatrix[k][j] -= factor * extendedMatrix[i][j];
            }
        }
    }
    //обратный ход
    double* solutions = new double[n];
    for (int i = n - 1; i >= 0; i--) {
        solutions[i] = extendedMatrix[i][n];
        for (int j = i + 1; j < n; j++) {
            solutions[i] -= extendedMatrix[i][j] * solutions[j];
        }
        solutions[i] /= extendedMatrix[i][i];
    }
    for (int i = 0; i < n; ++i) {
        delete[] extendedMatrix[i];
    }
    delete[] extendedMatrix;
    return solutions;
}
