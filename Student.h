#pragma once
#include<iostream>
#include <cstring>
using namespace std;
class Student {
private:
	string name;
	int age;
	int rollNo;
	float gpa;
public:
	Student();  //default constructor                                
	Student(string n, int a, int r, float g);//parametrized constructor
	//setter methods
	void setName(string n);
	void setAge(int a);
	void setRollno(int r);
	void setGpa(float g);
	//getter methods
	string getName();
	int getAge();
	int getRollno();
	float getGpa();
	void display();
	void calculateGrade();
	~Student();
};
