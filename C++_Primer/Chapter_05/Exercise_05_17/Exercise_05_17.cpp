#include <iostream>
#include <vector>
using std::vector;

int main()
{
    vector<int> v1{ 0, 1, 1 }, v2{ 0, 1, 1, 2, 3, 5, 8 }; // True
    //vector<int> v1{ 0, 1, 1, 2, 3, 5, 8 }, v2{ 0, 1, 1 }; // True
    //vector<int> v1{ 0, 1, 1 }, v2{ 0, 1, 2, 2, 3, 5, 8 }; // False

    auto n = std::min(v1.size(), v2.size());
    decltype(n) i;

    for (i = 0; i != n && v1[i] == v2[i]; ++i)
        ; // Null statement

    std::cout << (i == n) << std::endl;

    return 0;
}
