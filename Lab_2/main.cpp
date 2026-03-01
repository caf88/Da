#include "NumberList.h"
#include "Student.h"
#include "compare.h"
#include <stdio.h>
#include <iostream>
int main()
{
	NumberList ceva;
	ceva.Init();
	int x;
	std::cin >> x;
	while (ceva.Add(x)) {
		ceva.Print();
		std::cin >> x;
	}
	ceva.Sort();
	ceva.Print();

	Student s1,s2;
	s1.setGradeM();
	s1.setGradeE();
	s1.setGradeH();
	float nrx=s1.getAverage();
	std::cout << nrx << std::endl;
	s2.setGradeM();
	s2.setGradeE();
	s2.setGradeH();
	float nry = s2.getAverage();
	std::cout << nry << std::endl;
	switch (compAverage(s1, s2)) {
	case 1: std::cout << "s1 e mai mare de cat s2"; break;
	case 0: std::cout << "s1 si s2 sunt egale"; break;
	case -1: std::cout << "s2 e mai mare de cat s1"; break;
	}
}