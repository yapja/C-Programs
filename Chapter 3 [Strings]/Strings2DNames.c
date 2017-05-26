#include<stdio.h>
#include<stdlib.h>

int main()
{
   char string[5][31];
   int i;
   
   for( i = 0 ; i < 5; i++)
      scanf("%s", string[i]);
   
   for( i = 0 ; i < 5; i++)
      printf("name[%d] : %s\n", i, string[i]);
   
   system("pause");
   return 0;
}
