// Defining and initializing library types
#include <string>
#include <vector>
using std::string;
using std::vector;

int main()
{
	// Strings
	string s1; // Default initialization; s1 is the empty string
	string s2("zzz"); // s2 is a copy of the string literal
	string s3(s2); // s3 is a copy of s2
	string s4 = s2; // s4 is a copy of s2
	string s5(3, 'z'); // s5 is zzz

	// Vectors
	vector<int> v1; // Default initialization; v1 is empty
	vector<int> v2(v1); // v2 is a copy of v1
	vector<int> v3 = v1; // v3 is a copy of v1
	vector<int> v4(3, 1); // v4 has three elements with value 1
	vector<int> v5(3); // v5 has three default-initialized elements
	vector<int> v6{1, 2, 3}; // v6 has the elements 1, 2 and 3
	vector<int> v7 = {1, 2, 3}; // v7 has the elements 1, 2 and 3

	// Arrays
	int a1[3]; // a1 has three elements with undefined value (default initialization)
	int a2[3] = {}; // a2 has three elements with value 0 (value Initialization)
	int a3[] = {1, 2, 3}; // a2 has the elements 1, 2 and 3
	int a4[4] = {1, 2, 3}; // a2 has the elements 1, 2, 3 and 0

	return 0;
}
