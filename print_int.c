#include<stdio.h>

void print_array(int *,int);

int main()
{
	int a[5]={1,2,3,4,5},ele=0;
	
	ele = sizeof(a)/sizeof(a[0]);
	print_array(a,ele);
}
void print_array(int *temp,int a)
{
	for(int i=0;i<a;i++)
		printf("a[%d] = %d\n",i,temp[i]);
	printf("\n");
}
