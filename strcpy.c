#include<stdio.h>
#include<string.h>

int main()
{
	char s1[]="rutvik",s2[10];
	int i=0,l=0;

	//l = strlen(s1);
	
	//printf("Len of s1 %d\n",l);
	printf("Before copy s2 %s\n",s2);
	printf("S1 string %s\n",s1);
	
	for(i=0; s1[i] != '\0'  ; i++)
	{
		s2[i] = s1[i];
	}
	s2[i] = '\0';
	
	printf("After copy s2 %s\n",s2);
}
