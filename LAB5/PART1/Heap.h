#pragma once
#include <vector>

using namespace std;

class Heap
{
private:
	void trickleUp();
	void trickleDown();
public:
	void insert(int i);
	void remove();
	vector<int> heap;
};