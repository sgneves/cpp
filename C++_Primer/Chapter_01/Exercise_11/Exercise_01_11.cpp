// Ex 1.11 - Prompts the user for two integers and prints each number in the range specified by
// those two integers.
#include <iostream>

int main()
{
	std::cout << "Enter two numbers:" << std::endl;
	int val, val1 = 0, val2 = 0;
	std::cin >> val1 >> val2;

	val = val1;
	std::cout << std::endl;

	while (val <= val2)
	{
		std::cout << val << std::endl;
		++val;
	}

	return 0;
}
