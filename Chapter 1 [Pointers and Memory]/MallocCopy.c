#include<stdio.h>
#include<stdlib.h>

void Copy(int *psource, int *pdest, int n)
{
   int i;
   for(i = 0; i < n; i++)
   {
      *(pdest + i) = *(psource + i);
   }
}

int main()
{
   int *psource;
   int *pdest;
   int n;
   int i;
   
   //Asks for the number of elements
   do{
      printf("Number of elements: ");
      scanf("%d", &n);
      if(n <= 0)
         printf("\nInvalid Input\n");
   }while(n <= 0);
   
   psource = malloc(sizeof(int) * n);
   pdest = malloc(sizeof(int) * n);
   
   //Fills in data
   for(i = 0; i < n; i++)
   {
      printf("Index[%d]: ", i);
         scanf("%d", psource + i);
   }
   for(i = 0; i < n; i++)
      *(pdest + i) = 0;
   
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
   
   //Function Call
   printf("\nCopying...\n");
   Copy(psource, pdest, n);
   
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
   
   free(psource);
   free(pdest);
   
   system("pause");
   return 0;
}
