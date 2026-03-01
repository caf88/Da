#include "Student.h"
#include <iostream>
void Student::setName()
{
	std::getline(std::cin, Name);
}
std::string Student::getName()
{
	return this->Name;
}

void Student::setGradeM()	
{
	std::cin>>this->grade.Math;
}

float Student::getGradeM()
{
	return this->grade.Math;
}

void Student::setGradeE()
{
	std::cin >> this->grade.English;
}

float Student::getGradeE()
{
	return this->grade.English;
}

void Student::setGradeH()
{
	std::cin >> this->grade.History;
}

float Student::getGradeH()
{
	return this->grade.History;
}

float Student::getAverage()
{
	return (this->grade.Math + this->grade.English + this->grade.History)/3;
}


