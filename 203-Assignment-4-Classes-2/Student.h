#ifndef STUDENT_CLASS
#define STUDENT_CLASS
#define STUDENT_ID_SIZE 5
#include <iostream>
#include <string>
#include <sstream>

class Student
{
private:
	std::string mStudentName;
	std::string mStudentHobby;
	int mStudentID;
	int convertID(const std::string);

public:
	Student();
	Student(const std::string, const std::string studentName, const std::string studentHobby);
	Student(const Student&  studentCopy);
	//setters
	void setStudentName(const std::string);
	void setStudentHobby(const std::string);
	void setStudentID(const std::string);
	void setStudentID(const int);
	//accessors
	int getStudentID() 
	{
		return mStudentID;
	}
	std::string getStudentHobby()
	{
		return mStudentHobby;
	}
	std::string getStudentName()
	{
		return mStudentName;
	}
	//other functions.
	void displayStudentInfo(const std::string);
	void changeStudentInfo(const std::string, const std::string studentName, const std::string studentHobby);
	
	~Student();
};

#endif