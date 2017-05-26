#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int IsPalindrome(char *str)
{
   int i, j;
   int palindrome = 1;
   
   j = strlen(str);
   
   //for(i = 0 ; str[i] != '\0'; i++);
   for(i = 0 ; i < j; i++)
   {
      if(!(str[i] == str[j - 1 - i]))
         palindrome = 0;
   }     
   return palindrome;
}

int main()
{
   char str[10];
   
   printf("Word to check: ");
   scanf("%s", str);
   
   printf("%d\n", IsPalindrome(str));
   
   system("pause");
   return 0;
}
