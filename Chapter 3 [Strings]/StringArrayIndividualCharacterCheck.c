#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 5

typedef char String[10];

int main()
{
   String names[SIZE] = {"HELLO", "WORLD"};
   int i, j;
   
   for(i = 0; i < 2; i++)
      for(j = 0; j < SIZE; j++)
         printf("%c\n", names[i][j]);
      
   system("pause");
   return 0;  
}
