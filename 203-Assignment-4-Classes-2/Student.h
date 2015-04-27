#ifndef STUDENT_CLASS
#define STUDENT_CLASS
#define STUDENT_ID_SIZE 5
#include <iostream>
#include <string>
#include <sstream>

class Student
{
private:
	std::string mStudentName = "";
	std::string mStudentHobby = "";
	int mStudentID = 00000;
	int convertID(const std::string);

public:
	Student();
	Student(const std::string, const std::string studentName, const std::string studentHobby);
	Student(Student& const studentCopy);
	//setters
	void setStudentName(const std::string);
	void setStudentHobby(const std::string);
	void setStudentID(const std::string);
	void setStudentID(const int);
	//accessors
	int Student::getStudentID()
	{
		return mStudentID;
	}
	std::string Student::getStudentHobby()
	{
		return mStudentHobby;
	}
	std::string Student::getStudentName()
	{
		return mStudentName;
	}
	//other functions.
	void displayStudentInfo(const std::string);
	void changeStudentInfo(const std::string, const std::string studentName, const std::string studentHobby);
	
	~Student();
};

#endif