// Ex 3.22 - Prints the contents of the first paragraph from a text file.
#include <iostream>
#include <vector>
using std::endl;
using std::cout;
using std::string;

int main()
{
    string word;
    std::vector<string> words;

    cout << "Enter a sequence of words:" << endl;

    while (std::cin >> word)
        words.push_back(word);

    for (auto i = words.begin(); i != words.end() && !i->empty(); i++)
    {
        for (auto j = i->begin(); j != i->end(); j++)
        {
            *j = toupper(*j);
        }
        cout << " " << *i;
    }
    cout << endl;

    return 0;
}
