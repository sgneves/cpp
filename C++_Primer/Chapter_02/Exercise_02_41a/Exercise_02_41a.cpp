// Ex 2.41a - Based on Exercise 1.20 but uses Sales_data class.
#include <iostream>

struct Sales_data {
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

int main()
{
	double avg_price, unit_price;
	Sales_data book;

	while (std::cin >> book.bookNo >> book.units_sold >> unit_price)
	{
		book.revenue = book.units_sold * unit_price;
		avg_price = (book.units_sold > 0) ? unit_price : 0;

		std::cout << book.bookNo << " " << book.units_sold << " " << book.revenue << " " << avg_price << std::endl;
	}

	return 0;
}
