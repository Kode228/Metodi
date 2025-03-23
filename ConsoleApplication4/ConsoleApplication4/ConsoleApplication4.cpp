#include <iostream>
#include <string>


using namespace std;

string convertBase(int num, int base) {
    if (num < 0 || base < 2 || base > 36) {
        return "Ошибка: Некорректные входные данные.";
    }

    string result = "";
    string symbols = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"; 

    if (num == 0) {
        return "0"; 
    }

    while (num > 0) {
        int remainder = num % base;
        result += symbols[remainder]; 
        num /= base;
    }

    reverse(result.begin(), result.end()); // Переворачиваем строку, т.к. цифры получаются в обратном порядке
    return result;
}
int main() {
    setlocale(LC_ALL, "Russian"); // Примеры
    cout << "27 в 16-ю: " << convertBase(27, 16) << endl;   //  1B
    cout << "13 в 5-ю: " << convertBase(13, 5) << endl;   //  23
    cout << "35 в 18-ю: " << convertBase(35, 18) << endl;   //  1H
    cout << "10 в 2-ю: " << convertBase(10, 2) << endl;    //  1010
    cout << "12345 в 36-ю: " << convertBase(12345, 36) << endl; // 9IX
    cout << "0 в 10-ю: " << convertBase(0, 10) << endl;      //  0
    cout << "-10 в 2-ю: " << convertBase(-10, 2) << endl;    // Ошибка: Некорректные входные данные.
    cout << "10 в 1-ю: " << convertBase(10, 1) << endl;    //  Ошибка: Некорректные входные данные.
    cout << "10 в 37-ю: " << convertBase(10, 37) << endl;    // Ошибка: Некорректные входные данные.

    return 0;
}