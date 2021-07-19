// Ex 3.13 - Defining and initializing vectors.
#include <string>
#include <vector>
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

    return 0;
}
