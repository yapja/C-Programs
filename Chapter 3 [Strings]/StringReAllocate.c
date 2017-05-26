#include<stdio.h>
#include<stdlib.h>

void Relocate(char *ptr, int origloc, int newloc)
{
   int i;
   char ch;
   
   ch = *(ptr + origloc);
   
   for( i = origloc; i < newloc; i++)
      *(ptr + i) = *(ptr + i + 1);

   *(ptr + newloc) = ch;
}


int main()
{
   char string[10];
   
   scanf("%s", string);
   Relocate(string, 0, 1);
   printf("%s\n", string);
   Relocate(string, 1, 3);
   printf("%s\n", string);
   Relocate(string, 4, 6);
   printf("%s\n", string);
   
   system("pause");
   return 0;
}
