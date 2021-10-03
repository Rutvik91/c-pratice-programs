#include<stdio.h>
void print(const char* c)
{
	c[0] = 'A';
	while(*c != '\0')
	{
		printf("%c",*c);
		c++;
	}
	printf("\n");
}
int main()
{
	char c[]="Rutvik";
	
	print(c);
}
