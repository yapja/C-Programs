#include<stdio.h>
#include<stdlib.h>

int CountOdd(int A[], int n)
{
   int i;
   int count = 0;
   
   for(i = 0; i < n - 2; i++)
      if(A[i] % 2 != 0)
         count++;
   return count;
}

int main()
{
   int A[5]={};
   int i;
   
   for(i = 0; i < 5; i++)
   {
      A[i] = rand();
      printf("[%d]", A[i]);
   }   
   
   printf("\nNumber of odd numbers: %d\n", CountOdd(A, 5));
        
   system("pause");
   return 0;
}
