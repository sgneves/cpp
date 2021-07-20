// Ex 3.25 - Counts how many grades fall into various clusters of 10.
#include <iostream>
#include <vector>
using std::endl;
using std::cout;

int main()
{
    unsigned grade;
    std::vector<unsigned> scores(11, 0);

    auto i = scores.begin();

    while (std::cin >> grade)
        if (grade <= 100)
            ++(*(i + grade / 10));

    for (auto i = scores.begin(); i != scores.end(); ++i)
        std::cout << *i << " ";
    std::cout << std::endl;

    return 0;
}
