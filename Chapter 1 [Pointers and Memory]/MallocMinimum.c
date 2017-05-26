#include<stdio.h>
#include<stdlib.h>

int Minimum(int *plist, int n)
{
   int min;
   int i;
   
   for(i = 0; i < n; i++)
      if(*(plist + i) < min)
         min = *(plist + i);
   
   return min;
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
   
   //Displays Values
   for(i = 0; i < n; i++)
   {
      printf("%d", *(plist + i));
      if(i != n - 1)
         printf(",");
      printf(" ");
   }
   
   printf("\n\nMinimum number is: %d\n", Minimum(plist, n));
   
   free(plist);
   
   system("pause");
   return 0;
}
