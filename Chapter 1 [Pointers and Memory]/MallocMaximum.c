#include<stdio.h>
#include<stdlib.h>

int Maximum(int *plist, int n)
{
   int max = 0;
   int i;
   
   for(i = 0; i < n; i++)
      if(*(plist + i) > max)
         max = *(plist + i);
   
   return max;
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
   
   printf("\n\nSum of all numbers is: %d\n", Maximum(plist, n));
   
   free(plist);
   
   system("pause");
   return 0;
}
