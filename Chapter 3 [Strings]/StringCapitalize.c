#include<stdio.h>
#include<stdlib.h>

char *Capitalize(char *str)
{
   int i;
   for(i = 0; *(str + i) != '\0'; i++)
      if(*(str + i) >= 97 && *(str + i) <= 122)
         *(str + i) -= 32;
   
   return str;
}
int main()
{
   char str[20];
   
   printf("Word to capitalize: ");
   scanf("%s", str);
   
   printf("%s", Capitalize(str));
   
   system("pause");
   return 0;
}
