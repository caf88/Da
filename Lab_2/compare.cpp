#include "compare.h"
int compName(Student a, Student b)
{
	if (a.Name > b.Name) return 1;
	if (a.Name < b.Name) return -1;
	return 0;
}

int compGradeM(Student a, Student b)
{
	if (a.grade.Math > b.grade.Math) return 1;
	else if (a.grade.Math < b.grade.Math) return -1;
	else return 0;
}

int compGradeE(Student a, Student b)
{
	if (a.grade.English > b.grade.English) return 1;
	else if (a.grade.English < b.grade.English) return -1;
	else return 0;
}

int compGradeH(Student a, Student b)
{
	if (a.grade.History > b.grade.History) return 1;
	else if (a.grade.History < b.grade.History) return -1;
	else return 0;
}

int compAverage(Student a, Student b)
{
	float x = a.getAverage(), y = b.getAverage();
	if (x > y) return 1;
	else if (x < y) return -1;
	else return 0;
}
