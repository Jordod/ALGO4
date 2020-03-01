#include <iostream>
using namespace std;

void swap(int* a, int* b)
{
	int t = *a;
	*a = *b;
	*b = t;
}


int partition(int arr[], int low, int high)
{
	int pivot = arr[high]; //last element as pivot
	int i = (low - 1); // Index of smaller element  

	for (int j = low; j <= high - 1; j++)
	{
		if (arr[j] < pivot)
		{
			i++;
			swap(&arr[i], &arr[j]);
		}
	}
	swap(&arr[i + 1], &arr[high]);
	return (i + 1);
}


void quickSort(int arr[], int low, int high)
{
	if (low < high) //base case
	{
		int pi = partition(arr, low, high); //partition index
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

int nSmallest(int arr[], int n, int length) //1 = smallest
{
	n--;
	quickSort(arr, 0, length - 1);
	return arr[n];
}

//time complexity = O(n^2) ?
int main()
{
	int arr[] = { -1, 6, 3, 4, 1, 2 };
	int n = 5;

	cout << "1st Smallest " << nSmallest(arr, 1, n) << endl;
	cout << "4th Smallest " << nSmallest(arr, 4, n) << endl;

}