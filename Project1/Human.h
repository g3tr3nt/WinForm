#pragma once
#include <string>
#include <fstream>
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

class Human {
private:

protected:
	string name;
	string surname;
	string email;
	int age;
	int phone;

public:
	Human() : name(""), surname(""), email(""), age(0), phone(0) {}
	
	virtual ~Human() = default;

	virtual void TouristType() const
	{
		"Its just a human";
	}

};