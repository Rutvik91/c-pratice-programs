#include<stdio.h>

struct car{
	char name[50],model[50],manu[50];
	int year[50];
};

void printcar(struct car *carn);

int main()
{
	struct car car1;

	printf("Enter the car name: ");
	gets(car1.name);
	printf("Enter the car model: ");
	gets(car1.model);
	printf("Enter the car name: ");
	gets(car1.manu);
	printf("Year of manufacturer: ");
	scanf("%d",&car1.year);
	
	printcar(&car1);

}

void printcar(struct car *carn)
{
	printf("Name of the car: %s\n",carn->name);
	printf("Name of the model: %s\n",carn->model);
	printf("Name of the manu: %s\n",carn->manu);
	printf("Name of the year: %d\n",carn->year);
}
