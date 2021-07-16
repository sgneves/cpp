// Ex 1.22 - Reads several transactions for the same ISBN and writes their sum.
#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item book, book_tmp;

	if (std::cin >> book)
	{
		while (std::cin >> book_tmp)
		{
			book += book_tmp;
		}
		std::cout << book;
	}
	else
	{
		std::cerr << "No data." << std::endl;
		return -1;
	}
	return 0;
}
