#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <iostream>
#include <string>
using std::string;

class Sales_data {

friend std::istream &read(std::istream&, Sales_data&);
friend std::ostream &print(std::ostream&, const Sales_data&);
friend Sales_data add(const Sales_data&, const Sales_data&);

public:
	Sales_data() = default;
	Sales_data(const string &s): bookNo(s) {}
	Sales_data(const string &s, unsigned n, double p): bookNo(s), units_sold(n), revenue(n*p) {}
	Sales_data(std::istream&);

	string isbn() const { return bookNo; }
	Sales_data &combine(const Sales_data&);
private:
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;

	double avg_price() const;
};

std::istream &read(std::istream&, Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
Sales_data add(const Sales_data&, const Sales_data&);
#endif
