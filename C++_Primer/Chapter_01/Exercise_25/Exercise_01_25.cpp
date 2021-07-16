// Ex 1.25 - Reads several transactions and outputs the number of copies sold, revenue and average
// sale price for each book.
#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item book, book_tmp;

	if (std::cin >> book)
	{
		while (std::cin >> book_tmp)
		{
			if (book_tmp.isbn() == book.isbn())
			{
				book += book_tmp;
			}
			else
			{
				std::cout << book << std::endl;
				book = book_tmp;
			}
		}
		std::cout << book << std::endl;
	}
	else
	{
		std::cerr << "No data." << std::endl;
		return -1;
	}

	return 0;
}
