// Ex 3.17 - Reads a sequence of words, changes them to uppercase and prints the result with eight
// words per line.
#include <iostream>
#include <vector>
using std::cout;
using std::string;

int main()
{
    int i = 0;
    string word;
    std::vector<string> words;

    std::cout << "Enter a sequence of words:" << std::endl;

    while (std::cin >> word)
        words.push_back(word);

    for (auto word : words)
    {
        for (auto& c : word)
            c = toupper(c);

        cout << " " << word;

        ++i;
        if (i == 8)
        {
            i = 0;
            cout << std::endl;
        }
    }

    cout << std::endl;

    return 0;
}
