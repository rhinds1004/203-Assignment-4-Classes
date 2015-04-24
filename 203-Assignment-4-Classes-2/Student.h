#ifndef STUDENT_CLASS
#define STUDENT_CLASS
#include <iostream>
#include <string>
#include <cstdlib>
class Student
{
private:
	std::string mStudentName = "";
	std::string mStudentHobby = "";
	int mStudentID = 00000;

public:
	Student();
	void setStudentName(std::string);
	void setStudentHobby(std::string);
	void setStudentID(std::string);
	void setStudentID(int);
	void displayStudentInfo(const int);
	~Student();
};

#endif