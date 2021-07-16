// Ex 3.4 - Reads two strings and reports whether the strings are equal.
#include <iostream>
#include <string>
using std::endl;
using std::cin;
using std::cout;
using std::string;

int main()
{
	string word1, word2;

	cin >> word1 >> word2;

	if (word1 == word2)
		cout << "The words are the same" << endl;
	else if (word1 > word2)
		cout << word1 << " is larger" << endl;
	else
		cout << word2 << " is larger" << endl;

	return 0;
}
