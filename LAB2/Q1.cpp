#include <iostream>

template<typename T>
void swap(T& lhs, T& rhs)
{
	T hold = lhs;
	lhs = rhs;
	rhs = hold;
}

template<typename T>
void swap(T* lhs, T* rhs)
{
	T hold = *lhs;
	*lhs = *rhs;
	*rhs = hold;
}

int main()
{
	int a = 10;
	int b = 20;
	
	std::cout << a << ',' << b << '\n';
	swap<int>(a, b);
	std::cout << a << ',' << b << '\n';
	swap<int>(&a, &b);
	std::cout << a << ',' << b << '\n';
		
}