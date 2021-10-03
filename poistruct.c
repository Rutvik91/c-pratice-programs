#include<stdio.h>
#include<stdlib.h>

void print(int ,char *,float);

struct st{
	int rollno;
	char name[10];
	float marks;
};
void print1(struct st se);

int main()
{
	struct st s1={1,"abc",33.5};
	
	//printf("%d \n",s1.rollno);
	print(s1.rollno,s1.name,s1.marks);
	print1(s1);
	return 0;
}

void print(int i ,char *s,float f){
	printf("%d %s %f\n",i,s,f);
}

void print1(struct st se){
	printf("%d %s %f\n",se.rollno,se.name,se.marks);
}
