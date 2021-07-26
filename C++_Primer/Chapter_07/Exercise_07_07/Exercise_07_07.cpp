// Ex 7.7 - Added the add, read, and print members to the Sales_data class defined in Ex 7.3.
#include <iostream>
#include <stdexcept>
#include "Sales_data.h"

int main()
{
	try {
		Sales_data curr, total;

		if (read(std::cin, total)) {
			while (read(std::cin, curr)) {
				if (curr.isbn() == total.isbn())
					total.combine(curr);
				else {
					print(std::cout, total) << std::endl;
					total = curr;
				}
			}
			print(std::cout, total) << std::endl;
		}
		else
			throw std::runtime_error("Error: No data.");
	}
	catch (std::runtime_error err) {
		std::cout << err.what() << std::endl;
		return -1;
	}
	return 0;
}
