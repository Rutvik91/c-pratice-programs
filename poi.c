#include<stdio.h>

int main()
{
	//int b[2][3]={10,2,3,4,5,6};
	int a[3]={10,2,3};
	int a = 10;

	int (*p)[3];
	int *p[3] = {&, }
	int *ptr;

	ptr = &a;

	printf(*ptr);

	p = &b;
	printf("size p = %ld\n", sizeof(p));
	printf("size b[0] = %ld\n", sizeof(b[0]));
	printf("p=%p p+1 = %p\n", p , p+1);
	printf("%d %d %d\n",*(*p + 0),(*p)[1],(*p)[2]);*(p[0][0])
}

func(int* arr,int size)
{
	arr + 1;
}
