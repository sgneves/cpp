#include <iostream>

// Reads the information of a person
std::istream &read(std::istream &is, Person &item) {
	is >> item.name >> item.address;
	return is;
}

// Prints the information of a person
std::ostream& print(std::ostream& os, const Person &item) {
	std::cout << item.name() << " " << item.address;
	return os;
}
