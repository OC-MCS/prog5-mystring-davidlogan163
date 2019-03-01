#include "MyString.h"
#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

//====================================================================
//Function: myString default constructor
//Intializes the instance with a nullpointer
//Parameters: None
//Returns: None
//====================================================================
myString::myString(){
	string = nullptr;
}

//====================================================================
//Function: myString::myString
//Constructor that initializes an instance with a string
//Parameters: *str
//Returns: None
//====================================================================
myString::myString(const char *str){
	int size = strlen(str) + 1;
	string = new char[size];
	strcpy_s(string, size, str);
}

//==========================================================================================
//Function: Copy Constructor
//Initializes an instance with another already initialized instance
//Parameters: other
//Returns: None
//==========================================================================================
myString::myString(const myString &other){
	int size = strlen(other.string) + 1;
	string = new char[size];
	strcpy_s(string, size, other.string);
}

//============================================================
//Function: myString::operator = 
//Overloaded assignment operator
//Parameters: other
//Returns: *this
//============================================================
myString myString::operator = (const myString &other){
	int SIZE = strlen(other.string) + 1;
	if (this != &other){
		
		delete[] string;
		string = new char[SIZE];
		strcpy_s(string, SIZE, other.string);
	}
	return *this;
}

//============================================================
//Function: myString::operator +
//Overloaded + operator
//Parameters: other
//Returns: same
//============================================================
myString myString::operator + (const myString &other){
	char* same;
	int SIZE = strlen(string) + strlen(other.string) + 1;

	same = new char[SIZE];
	strcpy_s(same, SIZE, string);
	strcat_s(same, SIZE, other.string);

	return same;
}

//=======================================================
//Function: myString::operator ==
//Overloaded == operator
//Parameters: None
//Returns: similar
//=======================================================
bool myString::operator == (const myString &other){
	bool similar = false;

	if (strcmp(string, other.string) == 0){
		similar = true;
	}
	else{
		similar = false;
	}
	return similar;
}

//===========================================================
//Function: myString:: ~MyString
// Destructor that deleted allocated memory
//Parameters: None
//Returns: None
//===========================================================
myString::~myString(){
	delete[] string;
}

//==========================================================
//Function: myString::c_str
// c_str() returns a pointer to a char
//Parameters: None
//Returns: string
//==========================================================
char* myString::c_str() const{
	return string;
}

//===========================================================
//Function: ostream
//Overloaded output operator
//Parameters: string, other
//Returns: string
//===========================================================
ostream& operator << (ostream& string, const myString& other){
	string << other.c_str();
	return string;
}

