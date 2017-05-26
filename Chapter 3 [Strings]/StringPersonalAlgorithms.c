#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int mystrlen(char *str);
char *mystrcpy(char *str1, char *str2);
char *mystrcat(char *str1, char *str2);
int mystrcmp(char *str1, char *str2);

int mystrlen(char *str)
{
   int i;
   for(i = 0; str[i] != '\0'; i++);
   return i;
}

char *mystrcpy(char *str1, char *str2)
{
   int i;
   
   for(i = 0; str2[i] != '\0'; i++)
      str1[i] = str2[i];
   
   return str1;
}

char *mystrcat(char *str1, char *str2)
{
   int i, j;
   int n;
   
   n = mystrlen(str1);
   
   for(j = 0, i = n; j < n; j++, i++){
      printf("%c - %c\n", str1[i], str2[j]);
      str1[i] = str2[j];
   }
   
   for(i = 0; str1[i] != '\0'; i++)
      printf("%c\n", str1[i]);
      
   return str1;
}

int mystrcmp(char *str1, char *str2)
{
   int i;
   
   for(i = 0; str1[i] != '\0'; i++)
      if(!(str1[i] == str2[i]));
}

int main()
{
   char str1[15];
   char str2[15];
   
   printf("Enter a word: ");
   scanf("%s", str1);
   
   printf("Word length is: %d\n", mystrlen(str1));
   
   mystrcpy(str2, str1);
   
   printf("Word again is: %s\n", str2);
   printf("Enter another word: ");
   scanf("%s", str2);
   
   printf("Combining Words...\n");
   mystrcat(str1, str2);
   printf("Combined String: %s\n", str1);
   
   system("pause");
   return 0;
}
