#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef char string[10];

int main()
{
   string name[10];
   int i;
   
   for(i = 0; i < 5; i++)
   {
      printf("Name: ");
      scanf("%s", name[i]);
   }
   
   for(i = 0; i < 5; i++)
   {
      printf("Name: %s\n", name[i]);
   }
   
   system("pause");
   return 0;
}
