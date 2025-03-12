#include <iostream>
using namespace std;

const int LIST_SIZE = 10;
// Реализация ввода пользователем списка из 10 элементов
void getUserInput(int list[]) {
    cout << "Введите 10 целых чисел:" << endl;
    for (int i = 0; i < LIST_SIZE; ++i) {
        cout << "Элемент " << i + 1 << ": ";
        cin >> list[i];
    }
}


// Сортировка пузырьком
void bubbleSort(int list[]) {
    for (int i = 0; i < LIST_SIZE - 1; ++i) {
        for (int j = 0; j < LIST_SIZE - i - 1; ++j) {
            if (list[j] > list[j + 1]) {
               swap(list[j], list[j + 1]);
            }
        }
    }
}

// Сортировка выбором
void selectionSort(int list[]) {
    for (int i = 0; i < LIST_SIZE - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < LIST_SIZE; ++j) {
            if (list[j] < list[minIndex]) {
                minIndex = j;
            }
        }
        
        if (minIndex != i) {
            swap(list[i], list[minIndex]);
        }
    }
}

// Сортировка вставками
void insertionSort(int list[]) {
    for (int i = 1; i < LIST_SIZE; ++i) {
        int key = list[i];
        int j = i - 1;

     
        while (j >= 0 && list[j] > key) {
            list[j + 1] = list[j];
            j = j - 1;
        }
        list[j + 1] = key;
    }
}


// Вывод пользователю отсортированного списка
void printList(const int list[]) {
    cout << "Отсортированный список:" << endl;
    for (int i = 0; i < LIST_SIZE; ++i) {
        cout << list[i] << " ";
    }
    cout << endl;
}

int main() {
    setlocale(LC_ALL, "Russian");

       int list[LIST_SIZE]; 
    getUserInput(list);

    // Меню выбора сортировки
    int choice;
 
    cout << "\nВыберите алгоритм сортировки:" << endl;
    cout << "1. Сортировка пузырьком" << endl;
    cout << "2. Сортировка выбором" << endl;
    cout << "3. Сортировка вставками" << endl;
    cout << "Ваш выбор: ";
    cin >> choice;
       
    switch (choice) {
    case 1:
        bubbleSort(list);
        break;
    case 2:
        selectionSort(list);
        break;
    case 3:
        insertionSort(list);
        break;
    default:
        cout << "Неверный выбор. Выход из программы." << endl;
        return 1;
    }

    printList(list);

    return 0;
}