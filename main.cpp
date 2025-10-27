#include "Student.h"
using namespace std;
int main() {
	Student S1; // Default constructor
	Student S2("Ali", 20, 101, 3.6);
	Student S3;
	S3.setName("Sara");
	S3.setAge(19);
	S3.setRollno(102);
	S3.setGpa(2.4);
	S1.display();
	S1.calculateGrade();
	S2.display();
	S2.calculateGrade();
	S3.display();
	S3.calculateGrade();
	system("pause");
	return 0;
}
