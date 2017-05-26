#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int Minimum(int A[], int n)
{
   int i;
   int min;
   
   for(i = 0; i < n - 2; i++)
      if(A[i] < min)
         min = A[i];
   return min;
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
   
   printf("\nLowest number: %d\n", Minimum(A, 5));
        
   system("pause");
   return 0;
}
