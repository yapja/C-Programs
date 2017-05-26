#include<stdio.h>
#include<stdlib.h>

int IsIncreasingOrder(int A[], int n)
{
   int i;
   int order = 1;
   
   for(i = 0; i < n - 2; i++)
      if(!(A[i] < A[i + 1]))
         order = 0;
   return order;
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
   if(IsIncreasingOrder(A, 5))
      printf("\nArray is in increasing order\n");
   else printf("\nNot in increasing order\n");

        
   system("pause");
   return 0;
}
