#include<stdio.h>
#include<stdlib.h>

int main()
{
   int array[10]={};
   int *ptr;
   int i;
   
   array[1] = 5;
   ptr = array;
   
   for(i = 0; i < 10; i++)
   {
      printf("%p\n", &array[i]);
   }
      
   printf("\n");
   
   ptr = realloc(array, 20);
   
   for(i = 0; i < 20; i++)
   {
      printf("%p\n", &array[i]);
   }
   
   
   system("pause");
   return 0;
}
