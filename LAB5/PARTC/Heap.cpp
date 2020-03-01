#include <iostream>
#include <vector>

using namespace std;

template<typename T>
class Heap
{
private:
	void trickleUp();
	void trickleDown(int index, int length);
	vector<T> heap;
public:
	void insert(T i);
	void remove();
	void display();
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
	for (int i = 0; i < heap.size(); i++)
		cout << heap[i] << endl;
}

template<typename T>
void Heap<T>::trickleUp()
{
	int parent;
	for (int i = heap.size() - 1; i > -1; i--)
	{
		parent = (i - 1) / 2;
		if (heap[parent] > heap[i])
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