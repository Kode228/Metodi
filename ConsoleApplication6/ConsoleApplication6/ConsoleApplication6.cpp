#include <iostream>

using namespace std;

// 1 Задание
/*
void printPraymougolnuk(int height, int widght) {

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < widght; ++j) {

			cout << "*";

	 }
		cout endl;
	}

}

int main() {
	printPraymougolnuk(5, 10);
	return 0;
}
*/
// 2 Задание 
/*
double factorial(int n) {

       if (n < 0) {
        cout << "Error: The factorial is not defined for negative numbers." << endl;
        return -1.0; 
    }
        
    if (n == 0) {
        return 1.0;
    }

    double result = 1.0;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int number;
        
    cout << "Enter a non-negative integer to calculate the factorial:";
    cin >> number;
     
    double fact = factorial(number);

   
    if (fact != -1.0) {
       cout << "The factorial of a number " << number << " = " << fact << endl;
    }
    else {
     cout << "Calculating the factorial is not possible." << endl;
    }



    return 0;
}
*/
// 3 Задание
/*
bool Prostoe(int number) {
    if (number <= 1) {
        return false;
    }
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    cout << (Prostoe(7) ? "true" : "false") << endl;
    return 0;
}
*/

// 4 Задание
/*
double cubechisla(double number) {
    return number * number * number;

}
int main() {
    cout << cubechisla(3.5) << endl;
    return 0;
}
*/

// 5 Задание
/*
int maxoftwo(int a, int b) {
    return (a > b) ? a : b;

}
int main() {
    cout << maxoftwo(10, 20) << endl;
    return 0;

}
*/

// 6 Задание
/*
bool positelnoe(int number) {
    return (number > 0);

}
int main() {
    cout << (positelnoe(25) ? "true " : "false") << endl;
    return 0;

  }
*/