#include "Student.h"

using namespace std;

int main()
{
	Student stu1;
	string tempString = "";
	cout << "Enter ID: ";
	getline(cin, tempString);
	stu1.setStudentID(tempString);
	cout << "Enter Name: ";
	tempString.clear();
	getline(cin, tempString);
	stu1.setStudentName(tempString);
	cout << "Enter Hobby: ";
	tempString.clear();
	getline(cin, tempString);
	stu1.setStudentHobby(tempString);
	cout << "Enter ID: ";
	getline(cin, tempString);
	stu1.setStudentID(tempString);
	stu1.displayStudentInfo(atoi(tempString.c_str()));
	cin.get();
	return 0;
}