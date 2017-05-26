#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
   char name[10]="NoName";
   
   printf("%s\n", name);
   
   strcpy(name, "Albert");
   
   printf("%s\n", name);
   
   system("pause");
   return 0;
}
