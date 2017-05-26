#include<stdio.h>
#include<stdlib.h>

float Average(int *plist, int n)
{
   float sum;
   int i;
   
   sum = 0;
   
   for(i = 0; i < n; i++)
         sum += *(plist + i);
   
   return sum / n;
}

int main()
{
   int *plist;
   int n;
   int i;
   
   n = 5;
   
   plist = malloc(sizeof(int) * n);
   
   *(plist + 0) = 10;
   *(plist + 1) = -5;
   *(plist + 2) = 23;
   *(plist + 3) = -8;
   *(plist + 4) = 74;
   
   for(i = 0; i < n; i++)
   {
      printf("%d", *(plist + i));
      if(i != n - 1)
         printf(",");
      printf(" ");
   }
   
   printf("\n\nAverage of all numbers is: %.1f\n", Average(plist, n));
   
   free(plist);
   
   system("pause");
   return 0;
}
