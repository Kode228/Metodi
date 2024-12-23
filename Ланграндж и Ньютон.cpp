#include <iostream>
#include <cmath>
using namespace std;
/*
// Функция Ньютона
double newton(double initialGuess,
    double tolerance,
    int maxIterations,
    double (*f)(double),
    double (*df)(double)) {
    double x = initialGuess;
    for (int i = 0; i < maxIterations; ++i) {
        double fx = f(x);
        double dfx = df(x);

        if (abs(dfx) < 1e-9) {
            cout << "Производная близка к нулю, метод не сходится." << endl;
            return NAN;
        }
        double x_next = x - fx / dfx;

        if (abs(x_next - x) < tolerance) {
            cout << "Найдено решение на итерации: " << i + 1 << endl;
            return x_next;
        }
        x = x_next;
    }
    cout << "Метод не сошелся за " << maxIterations << " итераций." << endl;
    return NAN;
}
*/

/*
// Крамер

void cramer(double a1, double b1, double c1,
    double a2, double b2, double c2) {
    setlocale(LC_ALL, "Russian");
        
    double D = a1 * b2 - a2 * b1;
        
    if (D == 0) {
        cout << "Система уравнений не имеет единственного решения." << endl;
        return;
    }

    // Определители для x и y
    double Dx = c1 * b2 - c2 * b1;
    double Dy = a1 * c2 - a2 * c1;

    // Решения
    double x = Dx / D;
    double y = Dy / D;

    cout << "Решение: x = " << x << ", y = " << y << endl;
}

int main() {
    
    double a1 = 2, b1 = 3, c1 = 5;
    double a2 = 4, b2 = 5, c2 = 11;

    cramer(a1, b1, c1, a2, b2, c2);

    return 0;
}
*/