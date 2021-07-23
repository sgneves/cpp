// Ex 5.21 - Reads a sequence of strings from the standard input until the same word that starts
// with an uppercase letter occurs twice in succession.
#include <iostream>
#include <string>

int main()
{
    std::string curr, prev;

    while (std::cin >> curr && !curr.empty()) {
        if (!isupper(curr[0]))
            continue;
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
