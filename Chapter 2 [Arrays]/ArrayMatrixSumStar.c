#include<stdio.h>
#include<stdlib.h>

int sumStar (int A[50][50], int nLimit)
{
   int i,j,sum=0;
   for (i=0;i<nLimit;i++)
   {
       for(j=0;j<nLimit;j++)
       {
           if(i == j)
               sum = sum + A[i][j];
           else{
               if(i == nLimit / 2)
                  sum = sum + A[i][j];
               else if(j == nLimit / 2)
                  sum = sum + A[i][j];
               else if(i == nLimit - 1 - j)
                  sum = sum + A[i][j];
            }
            
           /* 
           if(i == j)
               sum = sum + A[i][j];
           if(i == nLimit / 2 && !(i == j))
               sum = sum + A[i][j];
           if(j == nLimit / 2 && !(j == i))
               sum = sum + A[i][j];
           if(i == nLimit - 1 - j && !(i == j))
               sum = sum + A[i][j];
            */
       }
   }
    return sum;
}

int main()
{
     //int A[50][50] = { {-1,5,3,4,5}, {54,0,2,6,59}, {2,8,-5,2,3},{82,4,6,4,-4}, {5,0,7,23,5} };
     int A[50][50] = {{-1,54,2,82,5},{5,0,8,4,0},{3,2,-5,6,7},{4,6,2,4,23},{5,59,3,-4,5}};
     int nLimit = 5;

     printf("Result = %d\n", sumStar(A,nLimit));
     system("pause"); 
     return 0;
}
