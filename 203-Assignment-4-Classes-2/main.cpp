#include "Student.h"

using namespace std;

int main()
{
	Student *stuArray = new Student[3] ;
	//Student stu1;
	stuArray[1];
	string tempString = "";
	string tempString2 = "";
	cout << "Enter ID: ";
	getline(cin, tempString2);
	stuArray[0].setStudentID(tempString2);
	cout << "Enter Name: ";
	tempString.clear();
	getline(cin, tempString);
	stuArray[0].setStudentName(tempString);
	cout << "Enter Hobby: ";
	tempString.clear();
	getline(cin, tempString);
	stuArray[0].setStudentHobby(tempString);
	//Student stuArray[1](stuArray[0]);
	//Student stuArray[2]("45678", "Niki", "Sleeping");
	//stuArray[0].displayStudentInfo(tempString2);
	stuArray[0].changeStudentInfo(tempString2, "Jack", "Being cute.");
	stuArray[1].displayStudentInfo(tempString2);
	stuArray[0].displayStudentInfo(tempString2);
	stuArray[2].displayStudentInfo("45678");
	cin.get();
	delete[3] stuArray;
	return 0;
}