#include <cctype>
#include <iostream>
#include <string>

int main()
{
	std::string word = "1234";

	for (auto &c : word)
		c = 'X';

	std::cout << word << std::endl;

	return 0;
}
