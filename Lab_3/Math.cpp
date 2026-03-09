#include "Math.h"
#include <cstdarg>
#include <string.h>
int Math::Add(int a, int b)
{
	return a + b;
}

int Math::Add(int a, int b, int c)
{
	return a + b + c;
}

int Math::Add(double a, double b)
{
	return a + b;
}

int Math::Add(double a, double b, double c)
{
	return a + b + c;
}

int Math::Mul(int a, int b)
{
	return a * b;
}

int Math::Mul(int a, int b, int c)
{
	return a * b * c;
}

int Math::Mul(double a, double b)
{
	return a * b;
}

int Math::Mul(double a, double b, double c)
{
	return a * b * c;
}

int Math::Add(int count, ...)
{
	int val = 0;
	va_list vl;
	va_start(vl, count);
	for (int i = 0; i < count; i++)
		val += va_arg(vl, int);
	va_end(vl);
	return val;
}

char* Math::Add(const char* a, const char* b)
{
	if (a == NULL || b == NULL) return nullptr;
	int size = strlen(a) + strlen(b) + 1;
	char* c = new char[size];
	strcpy_s(c, size, a);
	strcat_s(c, size, b);
	return c;
}