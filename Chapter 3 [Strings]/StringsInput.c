#include<stdio.h>
#include<stdlib.h>

int main ()
{
   char prompt[30] = "Input a word ( max. of 10 characters): ";
   char str [11];
   
   printf("%s",prompt);
   scanf("%s",str);
   printf ("You entered %s\n", str);
   
   system("pause");
   return 0;
}
