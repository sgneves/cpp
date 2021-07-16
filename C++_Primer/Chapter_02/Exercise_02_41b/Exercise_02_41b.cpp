// Ex 2.41b - Based on Exercise 1.21 but uses Sales_data class.
#include <iostream>

struct Sales_data {
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

int main()
{
	unsigned units_sold;
	double avg_price, revenue, unit_price_1, unit_price_2;
	Sales_data book_1, book_2;

	std::cin >> book_1.bookNo >> book_1.units_sold >> unit_price_1;
	std::cin >> book_2.bookNo >> book_2.units_sold >> unit_price_2;

	if (book_1.bookNo == book_2.bookNo)
	{
		units_sold = book_1.units_sold + book_2.units_sold;
		revenue = book_1.units_sold * unit_price_1 + book_2.units_sold * unit_price_2;
		avg_price = (units_sold > 0) ? revenue / units_sold : 0;

		std::cout << book_1.bookNo << " " << units_sold << " " << revenue << " " << avg_price << std::endl;

		return 0; // indicate success
	}
	else
	{
		std::cerr << "Data must refer to the same ISBN" << std::endl;
		return -1; // indicate failure
	}
}
