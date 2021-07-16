// Ex 2.42 - Based on 2.41d but uses the Sales_data.h header.
#include <iostream>
#include <string>
#include "Sales_data.h"

int main()
{
	double avg_price, unit_price;
	Sales_data book;
	std::string bookNo;
	unsigned units_sold;

	if (std::cin >> book.bookNo >> book.units_sold >> unit_price)
	{
		book.revenue = book.units_sold * unit_price;

		while (std::cin >> bookNo >> units_sold >> unit_price)
		{
			if (bookNo == book.bookNo)
			{
				book.units_sold += units_sold;
				book.revenue += units_sold * unit_price;
			}
			else
			{
				avg_price = (book.units_sold > 0) ? book.revenue / book.units_sold : 0;
				std::cout << book.bookNo << " " << book.units_sold << " " << book.revenue << " " << avg_price << std::endl;

				book.bookNo = bookNo;
				book.units_sold = units_sold;
				book.revenue = units_sold * unit_price;
			}
		}
		avg_price = (book.units_sold > 0) ? book.revenue / book.units_sold : 0;
		std::cout << book.bookNo << " " << book.units_sold << " " << book.revenue << " " << avg_price << std::endl;
	}
	else
	{
		std::cerr << "No data." << std::endl;
		return -1;
	}
	return 0;
}
