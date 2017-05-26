#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *Capitalize(char *str)
{
   int i;
   
   for(i = 0; str[i] != '\0'; i++)
      if(str[i] < 97)
         str[i] += 32;
   
   return str;
}

int main()
{
   char str[10];
   
   printf("Input Word: ");
   scanf("%s", str);
   
   strcpy(str, Capitalize(str));
   
   printf("Capitalization changed: %s\n", str);
   
   system("pause");
   return 0;
}
