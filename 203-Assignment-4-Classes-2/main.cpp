#include "Student.h"

using namespace std;

int main()
{
	Student **stuArray = new Student *[3] ;
	*(stuArray+0) = new Student();
	//Initilizing using Overloaded constructor.
	stuArray[2] = new Student("45678", "Niki", "Sleeping");
	stuArray[1] = new Student();
	
	//Initilzing element 0's member variables.
	cout << "** Showing setter functions **" << endl;
	cout << "Enter ID: 12345" << endl;
	stuArray[0]->setStudentID("12345");
	cout << "Enter Name: Robert Hinds" << endl;
	stuArray[0]->setStudentName("Robert Hinds");
	cout << "Enter Hobby: Sleeping"<< endl;
	stuArray[0]->setStudentHobby("Sleeping");
	//Using copy constructor to make a new Student object.
	Student stuArrayTemp(**(stuArray+0));
	*(stuArray[1]) = stuArrayTemp;
	//Using displayStudentInfo function.
	cout << "** Showing displayStudentInfo function which uses getter functions **" << endl;
	stuArray[0]->displayStudentInfo("12345");
	//Using changeStudentInfo function to change name and hobby only.
	stuArray[0]->changeStudentInfo("12345", "Jack", "Being cute.");
	cout << "** Showing result of copy constructor **" << endl;
	stuArray[1]->displayStudentInfo("12345");
	cout << "** Showing result of changeStudentInfo function **" << endl;
	stuArray[0]->displayStudentInfo("12345");
	cout << "** Displaying Overloaded constructor **" << endl;
	stuArray[2]->displayStudentInfo("45678");
	cin.get();
	delete stuArray[0];
	delete stuArray[1];
	delete stuArray[2];
	delete[] stuArray;
	
	return 0;
}