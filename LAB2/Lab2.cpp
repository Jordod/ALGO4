#include <iostream>

//Q1
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

//Q2
template<typename T>
void multiplies(T& sum, T x, int n)
{
	sum = 1;
	for (int i = 1; i <= n; i++)
	{
		sum += (x * i);
	}
}

//Q3
template<typename T1, typename T2>
void init(T1 num1, T1 num2, T2& start)
{
	T2 = 1;
	return T1 + T2;
}

int main()
{
	int a = 10;
	int b = 20;
	int sum, init;

	std::cout << a << ',' << b << '\n';
	swap<int>(a, b);
	std::cout << a << ',' << b << '\n';
	swap<int>(&a, &b);
	std::cout << a << ',' << b << '\n';


	multiplies<int>(sum, 2, 3);
	std::cout << sum << '\n';

	init<int,double>
}