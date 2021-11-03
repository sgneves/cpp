#ifndef PERSON_H
#define PERSON_H

#include <string>
using std::string;

class Person {

public:
	Person() = default;
	Person(const string &n, const string &a): name(n), address(a) {}
	Person(std::istream&);

	string name() const { return name; }
	string address() const { return address; }

private:
	string name;
	string address;
};
std::istream &read(std::istream&, Person&);
std::ostream &print(std::ostream&, const Person&)
#endif
