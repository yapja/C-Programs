#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
   char hello[10]="HELLO";
   char world[10]="WORLD";
   
   printf("%s\n", hello);
   
   strcpy(hello, world);
   
   printf("%s\n", hello);
   
   strcpy(hello, "HELLO");
   
   strcat(hello, " ");
   strcat(hello, world);
   
   printf("%s", hello);
   
   system("pause");
   return 0;
}
