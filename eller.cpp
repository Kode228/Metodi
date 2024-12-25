#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

// f(x, y)
double f(double x, double y) {
    return x + y; 
}

// Метод Эйлера
void Metodeller(double x0, double y0, double h, double x_end) {
    double x = x0;
    double y = y0;

    cout << fixed << setprecision(4);
    cout << "x\ty\n";
    cout << x << "\t" << y << endl;

    while (x < x_end) {
        y += h * f(x, y); 
        x += h;          

        cout << x << "\t" << y << endl; 
    }
}

int main() {
    double x0 = 0.0;   
    double y0 = 1.0;   
    double h = 0.1;    
    double x_end = 2.0; 

    Metodeller(x0, y0, h, x_end);






















    return 0;
}
