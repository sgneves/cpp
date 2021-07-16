// Ex 1.20 - Reads a set of book sales transactions and writes each transaction to the standard
// output.
#include <iostream>
#include "Sales_item.h"

int main()
{
	Sales_item book;

	while (std::cin >> book)
	{
		std::cout << book << std::endl;
	}

	return 0;
}
