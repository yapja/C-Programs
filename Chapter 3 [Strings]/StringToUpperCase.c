#include<stdio.h>
#include<stdlib.h>

void toUpperCase(char string[])
{
   int i;
   
   for(i = 0; string[i] != '\0'; i++)
      if(string[i] > 96)
         string[i] -= 32;
}

int main()
{
   char string[10];
   
   scanf("%s", string);
   toUpperCase(string);
   printf("%s\n", string);
   
   system("pause");
   return 0;
}
