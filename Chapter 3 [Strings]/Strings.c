#include<stdio.h>
#include<stdlib.h>

int main()
{
   char string[10]="HELLO";
   int i = 0;
   
   while(string[i] != '\0')
   {
      printf("%c", string[i]);
      i++;
   }
      
   system("pause");
   return 0;
}
