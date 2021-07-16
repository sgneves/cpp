// Ex 1.19 - Prompts the user for two integers and prints each number in the range specified by
// those two integers.
#include <iostream>

int main()
{
	std::cout << "Enter two numbers:" << std::endl;
	int val, val1 = 0, val2 = 0;
	std::cin >> val1 >> val2;

	if (val1 <= val2)
		for (val = val1; val <= val2; ++val)
		{
			std::cout << val << std::endl;
		}
	else
		for (val = val1; val >= val2; --val)
		{
			std::cout << val << std::endl;
		}

	return 0;
}
