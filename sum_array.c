#include<stdio.h>
int sum_array(int a[],int);

int main()
{
	int a[]={1,2,3,4,5},size,total;
	
	size = sizeof(a)/sizeof(a[0]);
	total = sum_array(a,size);
	
	printf("Sum of all the elements in array = %d\n",total);	
}

int sum_array(int a[],int size)
{
	int i,sum=0;
	for(i=0;i<size;i++)
		sum+= a[i];
	
	return sum;
}
