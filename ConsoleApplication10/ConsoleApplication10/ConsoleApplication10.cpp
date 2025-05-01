#include <iostream>
#include <algorithm>
using namespace std;
/*
// Задание 1: Сумма и произведение элементов массива
void calculateSumAndProduct(const int* arr, int size, long long* sum, long long* product) {
    *sum = 0;
    *product = 1;
    for (int i = 0; i < size; ++i) {
        *sum += arr[i];
        *product *= arr[i];
    }
}
*/
/*
// Задание 2: Количество отрицательных, положительных и нулевых элементов
void countElements(const int* arr, int size, int* negative, int* positive, int* zero) {
    *negative = *positive = *zero = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] < 0) (*negative)++;
        else if (arr[i] > 0) (*positive)++;
        else (*zero)++;
    }
}
*/
/*
// Задание 3: Проверка, является ли массив B подмножеством массива A
const int* findSubset(const int* A, int sizeA, const int* B, int sizeB) {
    if (sizeB == 0) return A;
    if (sizeB > sizeA) return nullptr;

    for (int i = 0; i <= sizeA - sizeB; ++i) {
        bool found = true;
        for (int j = 0; j < sizeB; ++j) {
            if (A[i + j] != B[j]) {
                found = false;
                break;
            }
        }
        if (found) return &A[i];
    }
    return nullptr;
}
*/
/*
// Задание 4: Удаление отрицательных элементов из массива
int* removeNegatives(const int* arr, int size, int* newSize) {
   int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] >= 0) count++;
    }

    *newSize = count;
    if (count == 0) return nullptr;

    int* newArr = new int[count];
    int index = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] >= 0) {
            newArr[index++] = arr[i];
        }
    }
    return newArr;
}
*/
/*
// Задание 5: Добавление блока элементов в конец массива
int* appendElements(int* arr, int size, const int* block, int blockSize, int* newSize) {
    *newSize = size + blockSize;
    int* newArr = new int[*newSize];

    for (int i = 0; i < size; ++i) {
        newArr[i] = arr[i];
    }

    for (int i = 0; i < blockSize; ++i) {
        newArr[size + i] = block[i];
    }

    return newArr;
}
*/
/*
// Задание 6: Вставка блока элементов по индексу
int* insertElements(int* arr, int size, int index, const int* block, int blockSize, int* newSize) {
    if (index < 0 || index > size) index = size; 

    *newSize = size + blockSize;
    int* newArr = new int[*newSize];

   for (int i = 0; i < index; ++i) {
        newArr[i] = arr[i];
    }

   for (int i = 0; i < blockSize; ++i) {
        newArr[index + i] = block[i];
    }

    for (int i = index; i < size; ++i) {
        newArr[i + blockSize] = arr[i];
    }

    return newArr;
}
*/
/*
// Задание 7: Удаление блока элементов по индексу
int* removeElements(int* arr, int size, int index, int blockSize, int* newSize) {
    if (index < 0) index = 0;
    if (index >= size) {
        *newSize = size;
        int* newArr = new int[size];
        copy(arr, arr + size, newArr);
        return newArr;
    }
    if (index + blockSize > size) blockSize = size - index;

    *newSize = size - blockSize;
    int* newArr = new int[*newSize];

    // Копируем часть до индекса
    for (int i = 0; i < index; ++i) {
        newArr[i] = arr[i];
    }

    for (int i = index + blockSize; i < size; ++i) {
        newArr[i - blockSize] = arr[i];
    }
    
    return newArr;
}
*/
