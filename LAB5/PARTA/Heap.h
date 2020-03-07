#pragma once
#include <vector>

using namespace std;

template <typename T>
class Heap
{
public:
	vector<int> heap;
	void insert(T n)
	{
		heap.push_back(n);
		trickleUp(heap.size() - 1);
	}

	T remove()
	{
		T val = heap[0];
		swap(heap[0], heap[heap.size() - 1]);

		heap.pop_back();
		trickleDown(0, heap.size());

		return val;
	}

	void display()
	{
		for (int i = 0; i < heap.size(); i++)
			cout << heap[i] << " ";
		cout << endl;
	}

	void sort()
	{
		for (int i = heap.size() - 1; i > -1; i--)
		{
			swap(heap[0], heap[i]);
			trickleDown(0, i);
		}
	}

private:
	void trickleUp(int index)
	{
		int parent = (index - 1) / 2;
		if (parent < 0) return;

		if (heap[index] > heap[parent])
			swap(heap[index], heap[parent]);

		trickleUp(index - 1);
	}

	void trickleDown(int index, int length)
	{
		int left = 2 * index + 1;
		int right = 2 * index + 2;
		int lowest = -1;

		if (left > length - 1 || right > length - 1)
			return;

		if (heap[index] < heap[left])
			lowest = left;
		if (heap[index] < heap[right] && heap[right] > heap[left])
			lowest = right;

		if (lowest != -1)
		{
			swap(heap[index], heap[lowest]);
			trickleDown(lowest, length);
		}
	}
};