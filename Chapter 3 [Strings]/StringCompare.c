#include<stdio.h>
#include<stdlib.h>
#include<strings.h>

int main()
{
   char hello[10]="HELLO";
   char world[10]="WORLD";
   char helloclone[10]="HELLO";
   
   printf("%d\n", strcmp(hello, world));
   printf("%d\n", strcmp(hello, helloclone));
   
   system("pause");
   return 0;
}
