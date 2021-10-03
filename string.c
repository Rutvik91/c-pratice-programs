#include<stdio.h>

int main()
{
	char c[]="Rutvik",s=0;

	for (int i=0;c[i]!=0;i++)
		s++;

	printf("String is %s\n",c);
	printf("Size of String is %lu\n",sizeof(c));
	printf("Len is %d\n",s);
}
