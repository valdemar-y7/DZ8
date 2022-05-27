#include "student.h"

Student::Student() {
	firstName = "unknown";
	lastName = "unknown";
	group = "unknown";
}

Student::~Student() {
}

void Student::setfirstName(string name) {
	this->firstName = name;
}

void Student::setlastName(string name) {
	this->lastName = name;
}

void Student::setGroup(string grupa) {
	this->group = grupa;
}

string Student::getfirstName() const {
	return firstName;
}

string Student::getlastName() const {
	return lastName;
}

string Student::getGroup() const {
	return group;
}

ostream& operator<<(ostream& out, const Student& s) {
	return out << s.getfirstName() << " " << s.getlastName() << " Group:" << s.getGroup() << "\n";
}

istream& operator>>(istream& in, Student& s) {
	in >> s.firstName;
	in >> s.lastName;
	in >> s.group;
	return in;
}

Student& Student::operator=(const Student& right) {
	firstName = right.firstName;
	lastName = right.lastName;
	group = right.group;
	return *this;
}