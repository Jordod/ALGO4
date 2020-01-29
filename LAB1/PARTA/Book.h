#pragma once
#include "Product.h"
class Book : public Product
{
private:

public:
	Book(double net);
	double getGrossPrice() const;
};

