#include <iostream>
using namespace std;

void safeReverseCopy(const int* src, int* dest, int size) {
	if (src == nullptr || dest == nullptr || size <= 0) {
		cerr << "Error: invalid parameters\n";
		return;
	}

	const int* srcEnd = src + size - 1;
	for (int i = 0; i < size; i++) {
		dest[i] = *(srcEnd - i);  // Безопасный доступ через индекс
	}
}

int main() {
	const int size = 5;
	int srcArray[size] = { 1, 2, 3, 4, 5 };
	int destArray[size] = { 0 };  // Важно инициализировать!

	safeReverseCopy(srcArray, destArray, size);

	cout << "Massive st: ";
	for (int n : srcArray) cout << n << " ";

	cout << "\nMassive reverse: ";
	for (int n : destArray) cout << n << " ";

	return 0;
}




/*
void reverseCopy(int* src, int* dest, int size) {

	int* srcEnd = src + size - 1;
	while (srcEnd <= srcEnd) {
		*dest = *srcEnd;
		dest++;
		src--;
		}
	}
int main() {
	const int size = 5;
	int srcArray[size] = { 1,2,3,4,5 };
	int destArray[size] = { 0 };
	
	reverseCopy(srcArray, destArray, size);
	
	cout << "Massive start";
	for (int i = 0; i < size; i++)
	{
		cout << srcArray[i] << " ";
	}
	cout << "Massive revers";
	for (int i = 0; i < size; i++)
	{
		cout << destArray[i] << " ";
	}
	cout << endl;
	return 0;
}
*/