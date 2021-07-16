// Ex 1.10 - Prints the numbers from ten down to zero.
#include <iostream>

int main()
{
	int val = 10;

	while (val >= 0)
	{
		std::cout << val << std::endl;
		--val;
	}

	return 0;
}
