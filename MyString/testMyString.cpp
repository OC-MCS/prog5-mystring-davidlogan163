//=======================================
//David Logan
//Program 5: MyString
//Due: 3/1/19
//=======================================
#include "MyString.h"
#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;


int main()
{
	myString s1("hello"); // default constructor initialized with hello
	myString s2("world"); // default constructor initialized with world
	myString s3(s1); // copy constructor

	s3 = s1 + " " + s2;

	myString s4 = s1;
	myString s5 = s2;
	myString s6 = s1 + " " + s2;


	cout << "Printing string 1: "<< s1 << endl;	
	cout << "Printing string 2: " << s2 << endl;
	cout << "Printing both strings together: "<< s3 << endl;
	cout << "Printing both strings together again: " << s6 << endl;

	if (s1 == s4) { //testing == operator
		cout << "Identical strings!" << endl;
	}

	if (!(s1 == s2)) {
		cout << "Not Identical strings!";
	}

	return 0;
}
