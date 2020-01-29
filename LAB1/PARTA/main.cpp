#include <iostream>
#include <vector>
#include <algorithm>

#include "Software.h"
#include "Book.h"
using namespace std;

bool sortByPrice(const Product* lhs, const Product* rhs) { return lhs->getGrossPrice() < rhs->getGrossPrice(); }


int main()
{
	vector <Product*> products(8);
	
	Book* a;
	Software* b;
	double price;
	int choice;

	cout << "Enter Software Price: ";
	cin >> price;
	b = new Software(price);
	products[0] = b;

	cout << "Enter Book Price: ";
	cin >> price;
	a = new Book(price);
	products[1] = a;

	cout << products[0]->getGrossPrice() << '\n';
	cout << products[1]->getGrossPrice() << '\n';

	for (int i = 2; i < products.size(); i++)
	{
		cout << "Enter Product Type (1 = Book, 2 = Software): ";
		cin >> choice;
		cout << "Enter Price: ";
		cin >> price;
		if (choice == 1) products[i] = new Book(price);
		if (choice == 2) products[i] = new Software(price);
	}

	for (int i = 0; i < products.size(); i++) 
	{
		cout << products[i]->getGrossPrice() << '\n';
	}

	sort(products.begin(), products.end(), sortByPrice);

	for (int i = 0; i < products.size(); i++)
	{
		cout << products[i]->getGrossPrice() << '\n';
	}
}
