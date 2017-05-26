#include<stdio.h>
#include<stdlib.h>

int Sum(int *plist, int n)
{
   int sum = 0;
   int i;
   
   for(i = 0; i < n; i++)
         sum += *(plist + i);
   
   return sum;
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
   
   printf("\n\nAverage of all numbers is: %d\n", Sum(plist, n));
   
   free(plist);
   
   system("pause");
   return 0;
}
