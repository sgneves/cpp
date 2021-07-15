#include <iostream>

int main()
{
	int sum = 0, val;

	std::cout << "Enter the numbers:" << std::endl;
	while (std::cin >> val)
	{
		sum += val;
	}

	std::cout << "The sum is " << sum << std::endl;

	return 0;
}
