#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define row 5
#define col 10

int main()
{
   char name[row][col];
   int i;
   
   for(i = 0; i < row; i++)
   {
      printf("Name %d: ", i);
      scanf("%s", name[i]);
   }
   
   for(i = 0; i < row; i++)
   {
      printf("Name %d: %s\n", i, name[i]);
   }
   
   system("pause");
   return 0;
}
