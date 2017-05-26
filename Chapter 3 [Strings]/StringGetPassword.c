einclude<stdio.h>
#include<stdlib.h>
#include<string.h>

int GetPassword(char *str)
{
   char password[10]="Hello"; 
   int accept = 0;
   do{
      printf("Enter Password: ");
      scanf("%s", str);
      
      if(strcmp(str, password))
         printf("Try Again\n");
      else accept = 1;
   }while(strcmp(str, password));
   
   return accept;
}

int main()
{
   char str[10];
   
   if(GetPassword(str))
      printf("Password Accepted\n");
   else printf("Password Denied\n");
   
   system("pause");
   return 0;
}
