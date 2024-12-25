#include <iostream>
using namespace std;
double f(double t, double y) {
    return y - t * t + 1;
}

// Метод Рунге-Кутты
void rungeKutta(double t0, double y0, double h, double t_end) {
    double t = t0;
    double y = y0;
    cout << "t\t\ty\n"; 
    cout << t << "\t\t" << y << "\n"; 

    while (t < t_end) {
        double k1 = h * f(t, y);
        double k2 = h * f(t + h / 2, y + k1 / 2);
        double k3 = h * f(t + h / 2, y + k2 / 2);
        double k4 = h * f(t + h, y + k3);
        y += (k1 + 2 * k2 + 2 * k3 + k4) / 6;
        t += h; 
     cout << t << "\t\t" << y << "\n"; 
    }
}
int main() {
    double t0 = 0.0; 
    double y0 = 0.5; 
    double h = 0.2;  
    double t_end = 2.0; 

    rungeKutta(t0, y0, h, t_end);





















    return 0;
}
