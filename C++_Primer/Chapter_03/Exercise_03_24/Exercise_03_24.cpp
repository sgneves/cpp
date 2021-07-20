// Ex 3.24 - Based on Exercise 3.20a but uses iterators.
#include <iostream>
#include <vector>
using std::cout;
using std::endl;

int main()
{
    int i;
    std::vector<int> v;

    cout << "Enter an even number of integers:" << endl;

    while (std::cin >> i)
        v.push_back(i);

    auto n = v.size();

    if (n % 2 != 0)
    {
        cout << "Must enter an even number of integers." << endl;
        return -1;
    }

    for (auto i = v.begin(); i != v.end(); i += 2)
        cout << *i + *(i + 1) << endl;

    cout << endl;

    for (auto i = v.begin(), j = v.end() - 1; j > i; ++i, --j)
        cout << *i + *j << endl;

    return 0;
}
