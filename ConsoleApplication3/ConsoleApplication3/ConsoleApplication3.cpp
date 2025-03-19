#include <iostream>

using namespace std;

int binarpoisk(const int arr[], int target, int low, int high) {
    if (low > high) {
        return -1; // ошибка
    }

    int mid = low + (high - low) / 2;

    if (arr[mid] == target) {
        return mid;
    }
    else if (arr[mid] < target) { // Corrected condition here
        return binarpoisk(arr, target, mid + 1, high); // Corrected argument here
    }
    else {
        return binarpoisk(arr, target, low, mid - 1);
    }
}

int main() {
    setlocale(LC_ALL, "Russian");

    int sortedarray[] = { 2, 5, 7, 9, 14, 17 };
    int arraysize = sizeof(sortedarray) / sizeof(sortedarray[0]);
    int targetnuzen = 14;

    int resultindex = binarpoisk(sortedarray, targetnuzen, 0, arraysize - 1);

    if (resultindex != -1) {
        cout << "Элемент " << targetnuzen << " найден по индексу " << resultindex << endl;
    }
    else {
        cout << "Элемент " << targetnuzen << " не найден в массиве" << endl;
    }

    return 0;
}