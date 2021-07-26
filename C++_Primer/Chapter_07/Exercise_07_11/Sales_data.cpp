#include <iostream>
#include <stdexcept>
#include "Sales_data.h"

// Constructor
Sales_data::Sales_data(std::istream &is) {
	read(is, *this);
}

// Combines this object with another object
Sales_data& Sales_data::combine(const Sales_data &book) {
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

// Reads a transaction. Must input ISBN, units sold and unit price
std::istream &read(std::istream &is, Sales_data &item) {
	double unit_price;
	is >> item.bookNo >> item.units_sold >> unit_price;
	item.revenue = item.units_sold * unit_price;
	return is;
}

// Prints the value of a Sales_data object on an ostream
std::ostream& print(std::ostream &os, const Sales_data &item) {
	std::cout << item.isbn() << " " << item.units_sold << " " << item.revenue
		<< " " << item.avg_price();
	return os;
}

// Adds two Sales_data objects
Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
	Sales_data sum = lhs; // copy data members from lhs into sum
	sum.combine(rhs); // add data members from rhs into sum
	return sum;
}
