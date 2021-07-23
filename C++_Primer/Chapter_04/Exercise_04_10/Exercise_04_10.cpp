// Ex 4.10 - Logical and relational operators.
#include <iostream>

int main()
{
    int i;

    while (std::cin >> i && i != 42)
		; // null statement

    return 0;
}
