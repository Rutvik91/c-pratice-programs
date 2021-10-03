#include <stdio.h>
#include<string.h>


int main () {

   char st1[] = "Hello, ";
   char st2[] = "How are you?";
   
   int i=0,j=0,len=0;
   //printf("Greeting message: %s\n", greeting );
   //printf("Len of st1 %d\n", strlen(st1));
   //printf("Len of st2 %d\n", strlen(st2));
   //
   for(len=0; st1[len]; len++);

  for(int i=0; st2[i] != '\0'; i++)
  {
        st1[len] = st2[i];
        len++;
  }
  printf("str1: %s\n",st1);
  printf("Len of str1 %d\n",strlen(st1));
   
   return 0;
}   
