#include "Heap.h"
#include <iostream>

using namespace std;

void Heap::insert(int i)
{
	heap.push_back(i);
	trickleUp();                                  
}

void Heap::remove()
{
	swap(heap[0], heap[heap.size() - 1]);
	heap.pop_back();
	trickleDown();
}

void Heap::trickleUp()
{
	int parent;
	for (int i = heap.size(); i > -1; i--)
	{
		parent = (i - 1) / 2;
		if (heap[parent] < heap[i])
		{
			swap(heap[parent], heap[i]);
		}
	}
}

void Heap::trickleDown()
{
	int left, right;
	for(unsigned int i = 0; i < heap.size(); i++)
	{
		left = (2 * i) + 1;
		right = (2 * i) + 2;
		if (heap[left] > heap[i])
			swap(heap[left], heap[i]);
		if (heap[right] > heap[i])
			swap(heap[right], heap[i]);
	}
}