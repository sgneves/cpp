// Ex 5.20 - Reads a sequence of strings from the standard input until either the same word occurs
// twice in succession.
#include <iostream>
#include <string>

int main()
{
    std::string curr, prev;

    while (std::cin >> curr) {
        if (curr == prev) {
            std::cout << "\n" << curr << " is repeated" << std::endl;
            break;
        }
        prev = curr;
    }
    if (std::cin.eof())
        std::cout << "No word was repeated" << std::endl;

    return 0;
}
