#include "Student.h"

using namespace std;

int main()
{
	Student **stuArray = new Student *[3] ;
	*(stuArray+0) = new Student();
	*(stuArray + 1) = new Student();
	stuArray[2] = new Student("45678", "Niki", "Sleeping");
	//stuArray[1] = new Student();
	string tempString = "";
	string tempString2 = "";
	cout << "Enter ID: ";
	getline(cin, tempString2);
	stuArray[0]->setStudentID(tempString2);
	cout << "Enter Name: ";
	tempString.clear();
	getline(cin, tempString);
	stuArray[0]->setStudentName(tempString);
	cout << "Enter Hobby: ";
	tempString.clear();
	getline(cin, tempString);
	stuArray[0]->setStudentHobby(tempString);
	Student stuArrayTemp(**(stuArray+0));
	*(stuArray[1]) = stuArrayTemp;
	stuArray[0]->displayStudentInfo(tempString2);
	stuArray[0]->changeStudentInfo(tempString2, "Jack", "Being cute.");
	stuArray[1]->displayStudentInfo(tempString2);
	stuArray[0]->displayStudentInfo(tempString2);
	stuArray[2]->displayStudentInfo("45678");
	cin.get();
	delete stuArray[0];
	delete stuArray[1];
	delete stuArray[2];
	delete[3] stuArray;
	
	return 0;
}