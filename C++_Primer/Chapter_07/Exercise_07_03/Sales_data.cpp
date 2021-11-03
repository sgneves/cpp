#include <iostream>
#include <stdexcept>
#include "Sales_data.h"

// Combines this object with another object
Sales_data &Sales_data::combine(const Sales_data &book) {
	if (bookNo != book.bookNo)
		throw std::runtime_error("Error: Both books must have same ISBN.");

	units_sold += book.units_sold;
	revenue += book.revenue;
	return *this;
}

// Returns the average price at which the books were sold
double Sales_data::avg_price() const {
	if (units_sold)
		return revenue / units_sold;
	else
		return 0;
}
