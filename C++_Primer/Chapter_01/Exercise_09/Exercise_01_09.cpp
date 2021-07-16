// Ex 1.9 - Sums the numbers from 50 to 100 using a while statement.
#include <iostream>

int main()
{
	int sum = 0, val = 50;

	while (val <= 100)
	{
		sum += val;
		++val;
	}

	std::cout << "The sum is " << sum << std::endl;

	return 0;
}
