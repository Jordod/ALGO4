#include <iostream>
#include "Heap.cpp"

//using namespace std;

int main()
{
	//{4, 5, 6, 15, 9, 7, 20, 16, 25, 14, 12, 11,8}
	Heap<int> h;
	h.insert(4);
	h.insert(5);
	h.insert(6);
	h.insert(15);
	h.insert(9);
	h.insert(7);
	h.insert(20);
	h.insert(16);
	h.insert(25);
	h.insert(14);
	h.insert(12);
	h.insert(11);
	h.insert(8);

	vector<int> sorted = h.sort();
	for (int i = 0; i < sorted.size(); i++)
		cout << sorted[i] << endl;
}
