#include <iostream>
using namespace std;

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