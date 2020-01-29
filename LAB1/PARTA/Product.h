#pragma once
class Product
{
private:
	double netPrice;
public:
	const double VAT_RATE = 0.21;

	Product(double net);
	virtual double getGrossPrice() const;
};