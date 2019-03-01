#pragma once
#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

class myString
{
private:
	char *string;
public:
	myString(); // default constructor
	myString operator + (const myString &other); // overloaded + operator
	bool operator == (const myString &other); // overloaded == operator
	myString operator = (const myString &other); // overloaded assignment operator
	char* c_str() const;
	myString(const char *str); //constructor
	myString(const myString& other); // copy constructor
	~myString(); // destructor
};

ostream& operator << (ostream& string, const myString& other);		
