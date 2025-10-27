#include<string>
#include "Student.h"
using namespace std;

Student::Student() {
	name = "Unknown";
	age = 0;
	rollNo = 0;
	gpa = 0.0;
}

Student::Student(string n, int a, int r, float g) {
	name = n;
	age = a;
	rollNo = r;
	gpa = g;
}

void Student::setName(string n) {
	name = n;
}

void Student::setAge(int a) {
	age = a;
}

void Student::setRollno(int r) {
	rollNo = r;
}

void Student::setGpa(float g) {
	gpa = g;
}

string Student::getName() {
	return name;
}

int Student::getAge() {
	return age;
}

int Student::getRollno() {
	return rollNo;
}

float Student::getGpa() {
	return gpa;
}
Student::~Student() {
	cout << "destructor for " << name << endl;
}
void Student::display() {
	cout << "Name: " << name << "  | AGE: " << age << "  | Roll no: " << rollNo << "  | GPA: " << gpa << endl;
}

// Display grade
void Student::calculateGrade() {
	if (gpa >= 3.6)
		cout << "Grade A" << endl;
	else if (gpa >= 3.2)
		cout << "Grade B" << endl;
	else if (gpa >= 2.6)
		cout << "Grade C" << endl;
	else
		cout << "Grade F" << endl;
}

