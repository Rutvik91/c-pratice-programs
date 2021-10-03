#include<stdio.h>
#include<string.h>

union Data{
	int i;
	float f;
	char name[20];
};

int main()
{
	union Data data;
	
	data.i = 10;
	data.f = 220.4;
	strcpy(data.name,"c programming");

	printf("data.i : %d\n",data.i);
	printf("data.f : %f\n",data.f);
	printf("data.name : %s\n",data.name);
}
