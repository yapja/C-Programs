#include<stdio.h>
#include<stdlib.h>

void RotateRight(int *plist, int n, int x)
{
   int i;
   int temp;
   int count;
   
   for(count = 1; count <= x; count++)
   {
      for(i = n - 1; i >= 0; i--)
      {
         if(i > 0)
         {
            temp = *(plist + i);
            *(plist + i) = *(plist + i - 1);
            *(plist + i - 1) = temp;
         }
      }
   }
}

int main()
{
   int *plist;
   int n;
   int i;
   int x;
   
   //Asks for the number of elements
   do{
      printf("Number of elements: ");
      scanf("%d", &n);
      if(n <= 0)
         printf("\nInvalid Input\n");
   }while(n <= 0);
   
   //Sets the memory allocated based on "n"
   plist = malloc(sizeof(int) * n);
   
   //Gets value for each index
   for(i = 0; i < n; i++)
   {
      printf("Index[%d]: ", i);
      scanf("%d", plist + i);
   }
   
   //Asks for the number of rotations
   printf("Number of Rotations: ");
   scanf("%d", &x);
   
   //Displays the values
   for(i = 0; i < n; i++)
      printf("%d, ", *(plist + i));
   
   //Function Call
   printf("\n\nRotating...\n\n");   
   RotateRight(plist, n, x);
   
   //Displays the values after rotation
   for(i = 0; i < n; i++)
      printf("%d, ", *(plist + i));
   
   free(plist);
   
   system("pause");
   return 0;
}
