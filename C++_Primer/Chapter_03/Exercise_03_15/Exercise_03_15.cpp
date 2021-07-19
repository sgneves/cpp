// Ex 3.15 - Reads a sequence of string from cin and stores them in a vector.
#include <iostream>
#include <vector>
using std::string;

int main()
{
    string word;
    std::vector<string> v;

    std::cout << "Enter sequence of words:" << std::endl;

    while (std::cin >> word)
        v.push_back(word);

    return 0;
}
