#include<stdio.h>

int main()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10},i,j,t,ele;

	ele=sizeof(a)/sizeof(a[0]);
	t=a[0];
	j=0;

	for(i=0;i<ele;i++)
	{
		//printf("t :%d\n",t);
		if(a[i]%2==0)
		{
		printf("even\n");
			//t=a[i];
			//j=i;
		}
		else
		printf("odd\n");
	}
	//printf("Ele %d\n",ele);
	//printf("Biggest number is: %d\n",t);
	//printf("Index of biggest number is: %d\n",j);
}