#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(int argc, char **argv)
{	
	int a,b;
	if(argc <= 3)
	{
		printf("Error: Please enter valid input CLA \n");
		return 0;
	}
	
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("atoi argv[1] = %d\n",a);
	printf("atoi argv[3] = %d\n",b);

	switch(*argv[2])
	{
		case '+' : printf("Addition of 2 ele is = %d\n", a + b);
			   break;
		case '-' : printf("Substraction of 2 ele is = %d\n", a - b);
			   break;
		case '*' : printf("Multiplication of 2 ele is = %d\n", a * b);
			   break;
		case '/' : printf("Division of 2 ele is = %d\n", a / b);
			   break;

		default  : printf("Please enter the valid input");
			   break;
	}
}
