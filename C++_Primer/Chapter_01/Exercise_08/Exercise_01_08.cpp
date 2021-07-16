// Ex 1.8 - Incorrect comments.
#include <iostream>

int main()
{
	std::cout << "/*";
	std::cout << "*/";
	//std::cout << /* "*/" */;
	std::cout << /* "*/" /* "/*" */;

	return 0;
}
