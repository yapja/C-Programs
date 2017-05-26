#include<stdio.h>
#include<stdio.h>

int main ()
{
   int M[2][3] = {{’A’,’B’,’C’},{’X’,’Y’,’Z’}};
   int i, j;
   
   printf("Brute force approach :\n");
   /* display row 0 element addresses */
   printf("&M[0][0] = %p\n", &M[0][0]);
   printf("&M[0][1] = %p\n", &M[0][1]);
   printf("&M[0][2] = %p\n", &M[0][2]);
   
   /* display row 1 element addresses */
   printf("&M[1][0] = %p\n", &M[1][0]);
   printf("&M[1][1] = %p\n", &M[1][1]);
   printf("&M[1][2] = %p\n", &M[1][2]);
   
   printf("\n");
   printf("Nested for loop approach :\n");
   for(i = 0; i < 2; i ++)
   for(j = 0; j < 3; j ++)
   printf("&M[%d][%d] = %p\n", i, j, &M[i][j]);
   
   return 0;
}
