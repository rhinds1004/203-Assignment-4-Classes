
#include "Student.h"


Student::Student()
{
}
Student::Student(const std::string studentID, const std::string studentName, const std::string studentHobby)
{
	setStudentID(studentID);
	setStudentName(studentName);
	setStudentHobby(studentHobby);

}
void Student::changeStudentInfo(const std::string studentID, const std::string studentName, const std::string studentHobby)
{
	if (studentID.length() == STUDENT_ID_SIZE)
	{
		int tempInt = convertID(studentID);
		if (tempInt == mStudentID)
		{
			setStudentName(studentName);
			setStudentHobby(studentHobby);
		}
	}
}
void Student::setStudentID(const int studentID)
{
	//add size check?
	mStudentID = studentID;
}
void Student::setStudentHobby(const std::string hobbyString)
{
	mStudentHobby = hobbyString;
}
void Student::setStudentID(const std::string studentID)
{	
	if (studentID.length() != STUDENT_ID_SIZE)
	{
		std::cout << "Error. Invalid Entry";
	}
	else
	{ 
		mStudentID = convertID(studentID);
	}
}
void Student::setStudentName(const std::string nameString)
{
	mStudentName = nameString;
}

//copy constructor
Student::Student(Student& studentSource)
{
	mStudentID = studentSource.mStudentID;
	mStudentName = studentSource.mStudentName;
	mStudentHobby = studentSource.mStudentHobby;
}

void Student::displayStudentInfo(const std::string studentID)
{
	if (studentID.length() == STUDENT_ID_SIZE)
	{
		int tempInt = convertID(studentID);
		if (tempInt == mStudentID)
		{
			std::cout << "Student Information" << std::endl;
			std::cout << "Student ID   : " << studentID << std::endl;
			std::cout << "Student name : " << mStudentName << std::endl;
			std::cout << "Student hobby: " << mStudentHobby << std::endl;
		}
	}
	else
		std::cout << "Error. Invalid Entry";
}

int Student::convertID(const std::string studentID)
{
	int tempInt = 0;
	std::stringstream stream;
	stream << studentID;
	stream >> tempInt;
	return tempInt;
}
Student::~Student()
{
}
