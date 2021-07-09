#include <iostream>

int main()
{
	int sum = 0, val = 50;

	for (val = 50; val <= 100; ++val)
	{
		sum += val;
	}

	std::cout << "The sum is " << sum << std::endl;

	return 0;
}
