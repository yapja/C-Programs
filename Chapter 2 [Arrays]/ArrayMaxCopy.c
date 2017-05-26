#include<stdio.h>
#include<stdlib.h>

void MaxCopy(int C[], int A[], int B[], int n)
{
   int i;
   
   for(i = 0; i < n; i++)
      if(A[i] > B[i])
         C[i] = A[i];
      else C[i] = B[i];
}

int main()
{
   int A[10]={1,2,3,4,5,6,7,8,9,10};
   int B[10]={10,9,8,7,6,5,4,3,2,1};
   int C[10]={};
   int i;
   
   for(i = 0; i < 10; i++)
      printf("A[%d] ", A[i]);
   printf("\n");
   for(i = 0; i < 10; i++)
      printf("B[%d] ", B[i]);
   printf("\n");
   MaxCopy(C, A, B, 10);
   for(i = 0; i < 10; i++)
      printf("C[%d] ", C[i]);
   printf("\n");
   system("pause");
   return 0;
}
