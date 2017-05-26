#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int Maximum(int A[], int n)
{
   int i;
   int max = 0;
   
   for(i = 0; i < n - 2; i++)
      if(A[i] > max)
         max = A[i];
   return max;
}

int main()
{
   int A[5]={};
   int i;
   
   srand(time(NULL));
   
   for(i = 0; i < 5; i++)
   {
      A[i] = rand();
      printf("[%d]", A[i]);
   }   
   
   printf("\nLowest number: %d\n", Maximum(A, 5));
        
   system("pause");
   return 0;
}
