// Ex 4.23 - Precedence of conditional operator.
#include <iostream>
#include <string>

int main()
{
    std::string s = "word";
    std::string pl = s + (s[s.size() - 1] == 's' ? "" : "s");

    std::cout << pl << std::endl;

    return 0;
}
