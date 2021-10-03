#include<stdio.h>

int main()
{
	int *p, i=1000000;
	char *c;

	c=&i;

	//(*p)++;
	//(*p)++;

	printf("Value of i = %d\n",*c);

	void *p0;
	printf("address = %p, value = %d\n",p0,*p0);

	//++(*p);

	//printf("Value of i = %d\n",*p);
}