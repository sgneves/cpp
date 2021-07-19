// Ex 3.13 - Defining and initializing vectors.
#include <iostream>
#include <string>
#include <vector>
using std::endl;
using std::cout;
using std::string;
using std::vector;

int main()
{
    vector<int> v1; // v1 is empty
    vector<int> v2(10); // v2 has ten elements with value 0
    vector<int> v3(10, 42); // v3 has ten elements with value 42
    vector<int> v4{10}; // v4 has one element with value 10
    vector<int> v5{10, 42}; // v5 has two elements with values 10 and 42
    vector<string> v6{10}; // v6 has ten empty strings
    vector<string> v7{10, "hi"}; // v7 has ten strings with value "hi"

    cout << "v1 - size: " << v1.size() << "; Values:";
    for (auto i : v1)
        cout << " " << i;
    cout << endl;

    cout << "v2 - size: " << v2.size() << "; Values:";
    for (auto i : v2)
        cout << " " << i;
    cout << endl;

    cout << "v3 - size: " << v3.size() << "; Values:";
    for (auto i : v3)
        cout << " " << i;
    cout << endl;

    cout << "v4 - size: " << v4.size() << "; Values:";
    for (auto i : v4)
        cout << " " << i;
    cout << endl;

    cout << "v5 - size: " << v5.size() << "; Values:";
    for (auto i : v5)
        cout << " " << i;
    cout << endl;

    cout << "v6 - size: " << v6.size() << "; Values:";
    for (auto i : v6)
        cout << " " << i;
    cout << endl;

    cout << "v7 - size: " << v7.size() << "; Values:";
    for (auto i : v7)
        cout << " " << i;
    cout << endl;

    return 0;
}
