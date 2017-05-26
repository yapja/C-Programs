#include<stdio.h>
#include<stdlib.h>

int Search(int *plist, int n, int key)
{
   int result = -1;
   int i;
   
   for(i = 0; i < n; i++)
      if(key == *(plist + i))
         result = i;
   
   return result;
}

int main()
{
   int *plist;
   int n;
   int key;
   int i;
   
   n = 5;
   
   plist = malloc(sizeof(int) * n);
   
   *(plist + 0) = 10;
   *(plist + 1) = -5;
   *(plist + 2) = 23;
   *(plist + 3) = -8;
   *(plist + 4) = 74;
   
   printf("Key: ");
   scanf("%d", &key);
   
   for(i = 0; i < n; i++)
   {
      printf("%d", *(plist + i));
      if(i != n - 1)
         printf(",");
      printf(" ");
   }
   
   printf("Key found on Index: %d\n", Search(plist, n, key));
   
   free(plist);
   
   system("pause");
   return 0;
}
