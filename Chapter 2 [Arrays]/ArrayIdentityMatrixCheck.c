#include<stdio.h>
#include<stdlib.h>

int IsIdentityMatrix(int M[][5])
{
   int i;
   int j;
   int identity = 0;
   
   for(i = 0; i < 5; i++)
      for(j = 0; j < 5; j++)
         if(M[i][i] == 1 || (M[i][j] == 0 && M[j][j] != 0))
            identity = 1;
         else identity = 0;
   return identity;
}

int main()
{
   int M[5][5]={};
   
   printf("IdentityMatrix: %d\n", IsIdentityMatrix(M));
   
   system("pause");
   return 0;
}
