#include<stdio.h>

struct book
{
        char title[50];
        char author[50];
        char subject[50];
        int book_id[50];
};

void printbook( struct book bookn);

int main()
{
	struct book book1,book2;

	printf("Enter the book title: ");
	gets(book1.title);
	printf("Enter the book author: ");
	gets(book1.author);
	printf("Enter the book subject: ");
	gets(book1.subject);
	printf("Enter the book_id: ");
	scanf("%d",book1.book_id);
		
	printbook(book1);
}

void printbook(struct book bookn)
{
	printf("Title of book: %s\n",bookn.title);
	printf("Author of book: %s\n",bookn.author);
	printf("Subject of book: %s\n",bookn.subject);
	printf("ID of book: %d\n",bookn.book_id);
}

