#include <iostream>
using namespace std;

void mergeSort(int arrayToSort[], int left, int right)
{
	if (left == right) return;
	int middle = left + (right - left) / 2; //find index of middle, or closest to if even
	mergeSort(arrayToSort, left, middle);
	mergeSort(arrayToSort, middle + 1, right);
}

void merge(int array2Half[], int startIndex, int length)
{

}

int main()
{
	const int LENGTH = 12;
	int* arr = new int[12] { 26, 42, 46, 37, 60, 10,12, 84, 75, 65, 67, 7 }; 

	for (int i = 0; i < LENGTH; i++)
		cout << arr[i] << endl;

	mergeSort(arr, 0, LENGTH - 1);

	delete[] arr;
}
