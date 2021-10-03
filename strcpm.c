#include<stdio.h>
void my_strcmp(char* a,char *b)
{
	int flag =0;

	while(*a != '\0' || *b != '\0')
	{
		if(*a == *b)
		{
			a++;
			b++;
		}
		else if((*a == '\0' && *b != '\0') ||
			(*a != '\0' && *b == '\0') ||
			(*a != *b))
		{
			flag = 1;
			printf("No equal\n");
			break;
		}
	}	
	if (flag == 0)
	{
		printf("Equal string\n");
	}
}
int main()
{
	char s1[] = "rutvik",s2[] = "rutvik";
	
	my_strcmp(s1,s2);	
}
