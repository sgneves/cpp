// Ex 3.10 - Reads a string and writes what was read but without the punctuation.
#include <iostream>
#include <string>
using std::endl;
using std::cout;

int main()
{
    std::string line;

    // Read a line
    cout << "Enter a string:" << endl;
    getline(std::cin, line);

    // Output without the punctuation
    cout << "String without the punctuation:" << endl;
    for (auto c : line)
        if (!ispunct(c))
            cout << c;
    cout << endl;

    return 0;
}
