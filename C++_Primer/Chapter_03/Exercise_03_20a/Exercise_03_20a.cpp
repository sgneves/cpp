// Ex 3.20a - Reads a set of integers and prints the sum of each pair of adjacent elements.
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

    for (int i = 0; i < n / 2; ++i)
        cout << v[2 * i] + v[2 * i + 1] << endl;

    return 0;
}
