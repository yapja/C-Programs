#include<stdio.h>
#include<stdlib.h>

#define SIZE 20

int main()
{
   char *pch;
   int *pi;
   float *pf;
   double *pd;
   
   int i;
   
   pch = malloc(sizeof(char) * SIZE);
   pi = malloc(sizeof(int) * SIZE);
   pf = malloc(sizeof(float) * SIZE);
   pd = malloc(sizeof(double) * SIZE);
   
      printf("  Char   ||   Int    ||   Float  ||  Double\n");
      printf("--------------------------------------------\n");
   
   for( i = 0; i < SIZE; i++)
   {
      printf("%p || %p || %p || %p \n", pch + i, pi + i, pf + i, pd + i);
   }
   system("pause");
   return 0;
}
