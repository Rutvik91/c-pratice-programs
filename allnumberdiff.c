#include<stdio.h>
int main()
{
	int a[]={1,2,3,4,5,6,7},b[]={11,12,13,14,15,16,17},i=0,j=0;

	for(i=0;i<a[i];i++)
	{
		printf("a[%d] = %d, b[%d]=%d \n",i,a[i],j,b[j]);
		for(j=0;j<b[j];j++)
		{
			printf("%d , %d\n",j,b[j]);
			if(a[i]==b[j])
			{
				printf("All the number are not same\n");
				break;
			}
		}
		j=0;
		//printf("All the number are same\n");
	}
	printf("All the number are same\n");
}
