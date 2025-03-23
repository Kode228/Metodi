#include <iostream>

using namespace std;

void reverseCopy(int* source, int* destination, int size) {
    int* sourceEnd = source + size - 1;
    int* destStart = destination;

    for (int i = 0; i < size; i++)
    {
        *destStart = *sourceEnd;
        destStart++;
        sourceEnd--;

    }

}

int main() {
    setlocale(LC_ALL, "Russian");
    int sourceArray[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(sourceArray) / sizeof(sourceArray[0]);
    int* destinationArray = new int[size]; 

    reverseCopy(sourceArray, destinationArray, size);

    cout << "Исходный массив: ";
    for (int i = 0; i < size; ++i) {
        cout << *(sourceArray + i) << " ";
    }
    cout << endl;

    cout << "Обращенный массив: ";
    for (int i = 0; i < size; ++i) {
        cout << *(destinationArray + i) << " ";
    }
    cout << endl;

    delete[] destinationArray; 

    return 0;
}