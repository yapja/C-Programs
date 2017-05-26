#include<stdio.h>
#include<stdlib.h>

void ReversedCopy(int *psource, int *pdest, int n)
{
   int i;
   for(i = 0; i < n; i++)
      *(pdest + i) = *(psource + (( n - 1) - i));
}

int main()
{
   int *psource;
   int *pdest;
   int n;
   int i;
   
   do{
      printf("Number of elements: ");
      scanf("%d", &n);
      if(n <= 0)
         printf("\nInvalid Input\n");
   }while(n <= 0);
   
   psource = malloc(sizeof(int) * n);
   pdest = malloc(sizeof(int) * n);
   
   //Fill in data
   for(i = 0; i < n; i++)
   {
      printf("Index[%d]: ", i);
         scanf("%d", psource + i);
   }
   for(i = 0; i < n; i++)
      *(pdest + i) = 0;
      
   printf("\n");
   printf("\n");
   //Checking Values Pt 1
   for(i = 0; i < n; i++)
   {   
      printf("PS[%d]:%d ", i, *(psource + i));
      if(i < n - 1)
         printf(",");
      }
   printf("\n");
   for(i = 0; i < n; i++)
   {   
      printf("PD[%d]:%d ", i, *(pdest + i));
      if(i < n - 1)
         printf(",");
      }
   printf("\n");
   
   //Function Call
   printf("\nCopying...\n");
   ReversedCopy(psource, pdest, n);
   printf("\n");
   
   //Checking Values Pt 2
   for(i = 0; i < n; i++)
   {   
      printf("PS[%d]:%d ", i, *(psource + i));
      if(i < n - 1)
         printf(",");
      }
      
   printf("\n");
   for(i = 0; i < n; i++)
   {   
      printf("PD[%d]:%d ", i, *(pdest + i));
      if(i < n - 1)
         printf(",");
      }
      
   printf("\n");
   printf("\n");
   
   free(psource);
   free(pdest);
   
   system("pause");
   return 0;
}
