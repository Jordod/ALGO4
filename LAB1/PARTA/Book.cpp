#include "Book.h"

Book::Book(double net) : Product(net) {}

double Book::getGrossPrice() const
{
	return Product::getGrossPrice() / (1 + Product::VAT_RATE);
}