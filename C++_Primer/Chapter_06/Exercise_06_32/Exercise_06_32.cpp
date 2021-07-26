// Ex 6.32 - Function that returns a reference to an element of an array.
#include <iostream>

int &get(int *arry, int index) {
	return arry[index];
}

int main() {
	int ia[10];
	for (int i = 0; i != 10; ++i)
		get(ia, i) = i;

	for (int i : ia)
		std::cout << i << " ";
	std::cout << std::endl;
}
