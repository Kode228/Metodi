#include <iostream>
#include <string>

using namespace std;

class String {
private:
    char* str;
    int len;  
    static int objectCount; 

    static int getStringLength(const char* s) {
        int length = 0;
        while (s[length] != '\0') {
            length++;
        }
        return length;
    }

    static void copyString(char* dest, const char* source) {
        int i = 0;
        while (source[i] != '\0') {
            dest[i] = source[i];
            i++;
        }
        dest[i] = '\0';
    }

public:
    String() : String(80) {
        cout << "Конструктор по умолчанию (80 символов)" << endl;
    }

    String(int size) : str(new char[size + 1]), len(size) {
        cout << "Конструктор произвольного размера (" << size << " символов)" << endl;
        str[0] = '\0';
        objectCount++;
    }

   String(const char* initialString) : String(getStringLength(initialString)) {
        cout << "Конструктор из строки: " << initialString << endl;
        copyString(str, initialString);
    }


   ~String() {
        cout << "Деструктор: удаление строки" << endl;
        delete[] str;
        objectCount--;
    }

    void inputString() {
        cout << "Введите строку: ";
        cin.getline(str, len + 1);
    }

    void printString() const {
        cout << "Строка: " << str << endl;
    }

    static int getObjectCount() {
        return objectCount;
    }

};
int String::objectCount = 0;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Количество объектов String до создания: " << String::getObjectCount() << endl;

    String str1;           
    str1.printString();
    cout << "Количество объектов String после str1: " << String::getObjectCount() << endl;


    String str2(50);        
    str2.inputString();
    str2.printString();
    cout << "Количество объектов String после str2: " << String::getObjectCount() << endl;

    String str3("Привет, мир!");
    str3.printString();
    cout << "Количество объектов String после str3: " << String::getObjectCount() << endl;

    {
        String str4("Внутри блока");
        str4.printString();
        cout << "Количество объектов String после str4: " << String::getObjectCount() << endl;
    }
    cout << "Количество объектов String после блока: " << String::getObjectCount() << endl;


    cout << "Конец программы" << endl;
    return 0;
}