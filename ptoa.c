#include<stdio.h>

int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int *p;
	int (*q)[2];
	int (*r)[3];
	
	p=a;
	q=a;
	r=a;

	printf("*p = %d\n",*p);
	printf("q[2][2] = %d\n",q[2][2]);
	printf("r[3][3] = %d\n",r[3][3]);
	
}
