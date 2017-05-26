#include<stdio.h>
#include<stdlib.h>

void Test(int A[], int n)
{
   A[0] = 5;
   A++; /* will this work? */
   *A= 10;
}
int main()
{
   int A[5];
   
   //Test(A, 5);
   
   A[0] = 5;
   A++; /* will this work? */
   *A= 10;
   
   printf("A[0] = %d\n", A[0]);
   printf("A[1] = %d\n", A[1]);
   system("pause");
   return 0;
}
