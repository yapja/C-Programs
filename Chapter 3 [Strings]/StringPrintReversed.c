#include<stdio.h>
#include<stdlib.h>

void PrintReversed(char *str)
{
   int i;
   
   for(i = 0; str[i] != '\0'; i++);
   while(i)
   {
      printf("%c", str[--i]);
   }
}
int main()
{
   char str[10];
   
   printf("Word to reversed: ");
   scanf("%s", str);
   
   PrintReversed(str);
   
   system("pause");
   return 0;
}
