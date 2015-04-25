#include "Student.h"

using namespace std;

int main()
{
	Student stu1;
	string tempString = "";
	string tempString2 = "";
	cout << "Enter ID: ";
	getline(cin, tempString2);
	stu1.setStudentID(tempString2);
	cout << "Enter Name: ";
	tempString.clear();
	getline(cin, tempString);
	stu1.setStudentName(tempString);
	cout << "Enter Hobby: ";
	tempString.clear();
	getline(cin, tempString);
	stu1.setStudentHobby(tempString);
	
	stu1.displayStudentInfo(tempString2);
	cin.get();
	return 0;
}