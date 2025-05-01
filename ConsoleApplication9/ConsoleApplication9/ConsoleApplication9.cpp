#include <iostream>
using namespace std;

void separateArray(const int* arr, int size, int*& posArr, int& posSize,
    int*& negArr, int& negSize, int*& zeroArr, int& zeroSize) {
    posSize = 0;
    negSize = 0;
    zeroSize = 0;

    for (int i = 0; i < size; ++i) {
        if (arr[i] > 0)
            posSize++;
        else if (arr[i] < 0)
            negSize++;
        else
            zeroSize++;
    }

    posArr = new int[posSize];
    negArr = new int[negSize];
    zeroArr = new int[zeroSize];

    int posIdx = 0, negIdx = 0, zeroIdx = 0;

    for (int i = 0; i < size; ++i) {
        if (arr[i] > 0)
            posArr[posIdx++] = arr[i];
        else if (arr[i] < 0)
            negArr[negIdx++] = arr[i];
        else
            zeroArr[zeroIdx++] = arr[i];
    }
}

int main() {
    const int size = 10;
    int arr[size] = { 5, -2, 0, 3, -1, 0, 7, -4, 2, 0 };

    int* posArr = nullptr;
    int* negArr = nullptr;
    int* zeroArr = nullptr;
    int posSize, negSize, zeroSize;

    separateArray(arr, size, posArr, posSize, negArr, negSize, zeroArr, zeroSize);

    cout << "Positive element (" << posSize << "): ";
    for (int i = 0; i < posSize; ++i)
        cout << posArr[i] << " ";
    cout << endl;

    cout << "Negative element (" << negSize << "): ";
    for (int i = 0; i < negSize; ++i)
        cout << negArr[i] << " ";
    cout << endl;

    cout << "Zero element (" << zeroSize << "): ";
    for (int i = 0; i < zeroSize; ++i)
        cout << zeroArr[i] << " ";
    cout << endl;

    delete[] posArr;
    delete[] negArr;
    delete[] zeroArr;

    return 0;
}