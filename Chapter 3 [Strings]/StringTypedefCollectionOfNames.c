#include<stdio.h>
#include<stdlib.h>

typedef char string[31];

int main()
{
   string names[5];
   int i;
   
   for( i = 0 ; i < 5; i++)
      scanf("%s", names[i]);
   
   for( i = 0 ; i < 5; i++)
      printf("name[%d] : %s\n", i, names[i]);
   
   system("pause");
   return 0;
}
