#include<stdio.h>
#include<stdlib.h>

void TransposeMatrix(int M[][4], int T[][4])
{
   int i;
   int j;
   
   for(i = 0; i < 4; i++)
      for(j = 0; j < 4; j++)
         T[j][i] = M[i][j];
}

int main()
{
   int M[4][4]={ { 1, 2, 3, 4},
                 { 5, 6, 7, 8},
                 { 9,10,11,12},
                 {13,14,15,16}
                 };
   int T[4][4];
   int i;
   int j;
   
   for(i = 0; i < 4; i++){
      for(j = 0; j < 4; j++)
         printf("M[%d] ", M[i][j]);
      printf("\n");
      }
   printf("\n");
   TransposeMatrix(M, T);
   for(i = 0; i < 4; i++){
      for(j = 0;j < 4; j++)
         printf("T[%d] ", T[i][j]);
      printf("\n");  
   }
   printf("\n");
   system("pause");
   return 0;
}
