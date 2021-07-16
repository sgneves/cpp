// Ex 3.2 - Reads a word at a time.
#include <iostream>
#include <string>
using std::endl;
using std::cin;
using std::cout;
using std::string;

int main()
{
	//string line;

	//while (getline(cin, line))
	//	cout << line << endl;

	string word;

	while (cin >> word)
		cout << word << endl;

	return 0;
}
