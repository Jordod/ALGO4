#include "Product.h"

Product::Product(double net) : netPrice(net) {}

double Product::getGrossPrice() const
{
	return Product::netPrice * (1 + Product::VAT_RATE);
}