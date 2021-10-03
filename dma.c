#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
	int r,c,**a;
	if(argc < 1)
	{
		printf("Error: plase enter valid input\n");
		return 0;
	}
		
	printf("Executing the program\n");

	r = atoi(argv[1]);
	c = atoi(argv[2]);
	
	printf("atoi argv[1] = %d\n",r);
	printf("atoi argv[2] = %d\n",c);

	a = malloc(sizeof(int *) * r);
	
	for(int i=0; i<r; i++)
		a[i] = malloc(sizeof(int) * c);

	for(int i=0; i<r; i++)
		for(int j=0; j<c; j++)
			scanf("%d",&a[i][j]);
	
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
			printf("%d",a[i][j]);
	printf("\n");
	}
}	
