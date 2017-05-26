#include<stdio.h>
#include<stdlib.h>

void MatrixMultiply(int C[][5], int A[][5], int B[][5])
{
   int i;
   int j;
   
   for(i = 0; i < 5; i++)
      for(j = 0; j < 5; j++)
         C[i][j] += A[j][i] * B[i][j];
}

int main()
{
   int A[5][5]={ { 1, 2, 3, 4, 5},
                 { 6, 7, 8, 9,10},
                 {11,12,13,14,15},
                 {16,17,18,19,20},
                 {21,22,23,24,25}
                 };
   int B[5][5]={ { 1, 2, 3, 4, 5},
                 { 6, 7, 8, 9,10},
                 {11,12,13,14,15},
                 {16,17,18,19,20},
                 {21,22,23,24,25}
                 };
   int C[5][5] = {};
   int i;
   int j;
   
   for(i = 0; i < 5; i++){
      for(j = 0; j < 5; j++)
         printf("A[%d] ", A[i][j]);
      printf("\n");
      }
   printf("\n");
   for(i = 0; i < 5; i++){
      for(j = 0; j < 5; j++)
         printf("B[%d] ", B[i][j]);
      printf("\n");
      }
   printf("\n");
   
   MatrixMultiply(C,A,B);
   
   for(i = 0; i < 5; i++){
      for(j = 0;j < 5; j++)
         printf("C[%d] ", C[i][j]);
      printf("\n");  
   }
   printf("\n");
   system("pause");
   return 0;
}
