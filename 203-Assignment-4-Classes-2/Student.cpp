
#include "Student.h"


Student::Student()
{
}
void Student::setStudentID(int  studentID)
{
	mStudentID = studentID;
}
void Student::setStudentHobby(std::string hobbyString)
{
	mStudentHobby = hobbyString;
}
void Student::setStudentID(std::string studentID)
{
	int tempInt;
	//add error checking to ensure proper length
	tempInt = atoi(studentID.c_str());
	mStudentID = tempInt;
}
void Student::setStudentName(std::string nameString)
{
	mStudentName = nameString;
}
void Student::displayStudentInfo(int iD)
{
	std::cout << "Student Information for student ID: " << iD << std::endl;
	std::cout << mStudentName << std::endl;
	std::cout << mStudentHobby << std::endl;
}

Student::~Student()
{
}
