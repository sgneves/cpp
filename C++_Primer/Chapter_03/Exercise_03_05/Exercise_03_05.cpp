#include <iostream>
#include <string>
using std::endl;
using std::cin;
using std::cout;
using std::string;

int main()
{
	string line, word;

	while (cin >> word)
	{
		line += word + " ";
	}

	cout << line << endl;

	return 0;
}
