// Ex 7.3 - Added the combine and isbn members to the Sales_data class defined in Ex 7.1.
#include <iostream>
#include <stdexcept>
#include "Sales_data.h"

int main()
{
	try {
		double avg_price, unit_price;
		Sales_data curr, total;

		if (std::cin >> total.bookNo >> total.units_sold >> unit_price)
		{
			total.revenue = total.units_sold * unit_price;

			while (std::cin >> curr.bookNo >> curr.units_sold >> unit_price)
			{
				curr.revenue = curr.units_sold * unit_price;

				if (curr.isbn() == total.isbn())
					total.combine(curr);
				else
				{
					avg_price = (total.units_sold > 0) ? total.revenue / total.units_sold : 0;
					std::cout << total.isbn() << " " << total.units_sold << " " << total.revenue << " " << avg_price << std::endl;

					total = curr;
				}
			}
			avg_price = (total.units_sold > 0) ? total.revenue / total.units_sold : 0;
			std::cout << total.isbn() << " " << total.units_sold << " " << total.revenue << " " << avg_price << std::endl;
		}
		else
		{
			throw std::runtime_error("Error: No data.");
		}
	}
	catch (std::runtime_error err) {
		std::cout << err.what() << std::endl;
		return -1;
	}
	return 0;
}
