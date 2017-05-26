#include<stdio.h>
#include<stdlib.h>

void Concatenate(int *plist1, int n1, int *plist2, int n2, int *plist3, int n3)
{
   int i;

   for(i = 0; i < n3; i++)
   {
      if(i < n1)
         *(plist3 + i) = *(plist1 + i);
      else
         *(plist3 + i) = *(plist2 + (i - n1));
   }
}

int main()
{
   int *plist1;
   int *plist2;
   int *plist3;
   int n1;
   int n2;
   int n3;
   int i;

   //List 1 Size
   do{
      printf("Number of elements for List 1: ");
      scanf("%d", &n1);
      if(n1 <= 0)
         printf("Invalid Input\n");
   }while(n1 <= 0);

   //List 2 Size
   do{
      printf("Number of elements for List 2: ");
      scanf("%d", &n2);
      if(n2 <= 0)
         printf("Invalid Input\n");
   }while(n2 <= 0);

   //Sets the size of List 3
   n3 = n1 + n2;

   plist1 = malloc(sizeof(int) * n1);
   plist2 = malloc(sizeof(int) * n2);
   plist3 = malloc(sizeof(int) * n3);

   //Fill in data for list 1
   for(i = 0; i < n1; i++)
   {
      printf("List 1 Index[%d]: ", i);
         scanf("%d", plist1 + i);
   }
   printf("\n");
   //Fill in data for list 2
   for(i = 0; i < n2; i++)
   {
      printf("List 2 Index[%d]: ", i);
         scanf("%d", plist2 + i);
   }

   //Function Call
   printf("\n");
   Concatenate(plist1, n1, plist2, n2, plist3, n3);
   printf("\n");

   //Displays the Values
   for(i = 0; i < n3; i++)
   {
      printf("%d", *(plist3 + i));
      if(i != n3 - 1)
         printf(",");
      printf(" ");
   }
   printf("\n");

   free(plist1);
   free(plist2);
   free(plist3);

   system("pause");
   return 0;
}
