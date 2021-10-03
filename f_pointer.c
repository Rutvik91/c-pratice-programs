#include<stdio.h>

int sum(int i,int j)
{
	return(i+j);
}

int main()
{
	int (*p)(int,int);
	int m=10,n=10,k;
	p = sum;

	k = (*p)(m,n);
	printf("K = %d\n",k);
}