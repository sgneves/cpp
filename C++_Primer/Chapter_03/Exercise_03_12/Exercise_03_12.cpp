// Ex 3.12 - Defining and initializing vectors.
#include <string>
#include <vector>
using std::string;
using std::vector;

int main()
{
    vector<vector<int>> ivec; // Legal
    vector<string> svec = ivec; // Illegal. svec and ivec must be of the same type
    vector<string> svec(10, "null"); // Legal. svec has ten elements with value "null"

    return 0;
}
