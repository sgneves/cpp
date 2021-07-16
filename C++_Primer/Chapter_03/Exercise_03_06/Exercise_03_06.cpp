// Ex 3.6 - Changes all characters in a string to X (uses a range for).
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
