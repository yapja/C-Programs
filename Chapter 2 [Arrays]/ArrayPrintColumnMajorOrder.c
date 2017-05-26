#include<stdio.h>
#include<stdlib.h>

void PrintColumnMajorOrder(int M[][5])
{
   int i;
   int j;
   
   for(i = 0; i < 5; i++)
      for(j = 0; j < 3; j++)
         printf("M[%d]\n", M[j][i]);
}

int main()
{
   int M[3][5]={ { 1, 2, 3, 4, 5},
                 { 6, 7, 8, 9,10},
                 {11,12,13,14,15},
                 };
   
   PrintColumnMajorOrder(M);

   printf("\n");
   system("pause");
   return 0;
}
   
