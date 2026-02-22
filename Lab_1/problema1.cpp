#include <iostream> 
int main() 
{ 
	FILE* file=nullptr; 
	fopen_s(&file,"in.txt", "r"); 
	char nr_char[9000]; 
	int sum = 0; 
	while(fgets(nr_char, sizeof(nr_char), file) != nullptr)
	{
		int size = strlen(nr_char),nr=0;
		if (nr_char[size - 1] == '\n') {
			size--;
		}
		for (int i = 0; i < size; i++)
		{
			nr = nr * 10 + nr_char[i]-48;
		}
		sum += nr;
		 
	} 
	printf("%d", sum);
	return 0;
}