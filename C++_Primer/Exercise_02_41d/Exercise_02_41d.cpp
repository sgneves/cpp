#include <iostream>
#include <string>

struct Sales_data {
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

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
