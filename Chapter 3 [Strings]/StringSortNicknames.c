#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 5

typedef char String[11];

void SortNicknames(String Friends[], int n)
{
   int i;
   String temp;
   int sorted = 0;
   while(sorted != n)
   {
      sorted = 0;
      for(i = 0; i < n - 1; i++)
      {
         if(Friends[i][0] > Friends[i + 1][0])
         {
            strcpy(temp, Friends[i]);
            strcpy(Friends[i], Friends[i + 1]);
            strcpy(Friends[i + 1], temp);
            sorted = 0;
         }
         else sorted += 1;
      }
   }
}

void PrintNicknames(String Friends[])
{
   int i;
   
   for(i = 0; i < SIZE; i++)
      printf(" [%s]\n", Friends[i]);   
}

int main()
{
   String Friends[SIZE];
   int i;
   
   for(i = 0; i < SIZE; i++)
   {
      printf("Input Friend's Name: ");
      scanf("%s", Friends[i]);
   }
   printf("Before Sorting\n");
   PrintNicknames(Friends);
   SortNicknames(Friends, SIZE);
   printf("After  Sorting\n");
   PrintNicknames(Friends);
   
   
   system("pause");
   return 0;
}
