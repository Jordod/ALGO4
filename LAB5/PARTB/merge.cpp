#include <iostream>
using namespace std;

//https://www.geeksforgeeks.org/merge-sort/
void merge(int arr[], int l, int m, int r)
{
	// First subarray is arr[l..m] 
	// Second subarray is arr[m+1..r] 
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	/* create temp arrays */
	int* L = new int[n1];
	int* R = new int[n2];

	/* Copy data to temp arrays L[] and R[] */
	for (i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];

	/* Merge the temp arrays back into arr[l..r]*/
	i = 0; // Initial index of first subarray 
	j = 0; // Initial index of second subarray 
	k = l; // Initial index of merged subarray 
	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			arr[k] = L[i];
			i++;
		}
		else
		{
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	/* Copy the remaining elements of L[], if there
	   are any */
	while (i < n1)
	{
		arr[k] = L[i];
		i++;
		k++;
	}

	/* Copy the remaining elements of R[], if there
	   are any */
	while (j < n2)
	{
		arr[k] = R[j];
		j++;
		k++;
	}
	delete[] L;
	delete[] R;
}

void mergeSort(int arrayToSort[], int left, int right)
{
	if (left == right) return;
	int middle = left + (right - left) / 2; //find index of middle, or closest to if even
	mergeSort(arrayToSort, left, middle);
	mergeSort(arrayToSort, middle + 1, right);
	merge(arrayToSort, left, middle, right);
}

int main()
{
	const int LENGTH = 12;
	int* arrMerge = new int[12] { 26, 42, 46, 37, 60, 10,12, 84, 75, 65, 67, 7 };

	mergeSort(arrMerge, 0, LENGTH - 1);

	cout << "Sorted w/ mergesort" << endl;
	for (int i = 0; i < LENGTH; i++)
		cout << arrMerge[i] << endl;

	delete[] arrMerge;
}
