#include <iostream>
#include "Heap.h"

using namespace std;

int main() 
{
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

	h.display();

	h.remove();
	h.display();

	h.sort();
	h.display();

}