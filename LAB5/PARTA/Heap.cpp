#include "Heap.h"
#include <iostream>
#include <vector>

using namespace std;

template<typename T>
class Heap
{
private:
	void trickleUp();
	void trickleDown(int index, int length);
	void display(int size, int index);
	vector<T> sort(int length);
	vector<T> heap;
public:
	void insert(T i);
	void remove();
	void display();
	vector<T> sort();
};

template<typename T>
void Heap<T>::insert(T i)
{
	heap.push_back(i);
	trickleUp();                                  
}

template<typename T>
void Heap<T>::remove()
{
	swap(heap[0], heap[heap.size() - 1]);
	heap.pop_back();
	trickleDown(0, heap.size());
}

template<typename T>
void Heap<T>::display()
{
	display(heap.size(), 0);
}

template<typename T>
void Heap<T>::display(int size, int index)
{
	int right, left;
	left = (2 * index) + 1;
	right = (2 * index) + 2;
	if (right >= heap.size()) return;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < size / 2; j++)
			cout << ' ';
		if (i == 0) cout << heap[index];
	}
	cout << endl;
}

template<typename T>
void Heap<T>::trickleUp()
{
	int parent;
	for (int i = heap.size() - 1; i > -1; i--)
	{
		parent = (i - 1) / 2;
		if (heap[parent] < heap[i])
		{
			swap(heap[parent], heap[i]);
		}
	}
}

//https://www.codeproject.com/Tips/816934/Min-Binary-Heap-Implementation-in-Cplusplus
//Couldn't figure how to solve w/o recursion
template<typename T>
void Heap<T>::trickleDown(int index, int length)
{
	int leftChildIndex = 2 * index + 1;
	int rightChildIndex = 2 * index + 2;

	if (leftChildIndex >= length)
		return; //index is a leaf

	int maxIndex = index;

	if (heap[index] < heap[leftChildIndex])
	{
		maxIndex = leftChildIndex;
	}

	if ((rightChildIndex < length) && (heap[maxIndex] < heap[rightChildIndex]))
	{
		maxIndex = rightChildIndex;
	}

	if (maxIndex != index)
	{
		//need to swap
		swap(heap[index], heap[maxIndex]);
		trickleDown(maxIndex, length);
	}
}

template<typename T>
vector<T> Heap<T>::sort()
{
	return sort(heap.size());
}

template<typename T>
vector<T> Heap<T>::sort(int length)
{
	if (length == 1) return heap; //base case
	swap(heap[0], heap[length - 1]); //swap to end
	trickleDown(0, length); //re-heap
	sort(length - 1);
}