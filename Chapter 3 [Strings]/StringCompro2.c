#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef char string[20];
/*
char *GetInitials(string *friends[], int x)
{
   string Initials;
   int i;

   for(i = 0; i < x; i++)
   {
      Initials[i] = friends[i];
   }
   Intials[i] = '\0';
   
   return Initials;
}*/
int main()
{
   string *ptr;
   string *msg;
   int x;
   int i;
   
   printf("How many friends do you have? ");
   scanf("%d", &x);
   
   ptr = malloc(sizeof(string) * x);
   
   printf("You have %d friends. Kindly name them: \n", x);
   for(i = 0; i < x; i++)
   {
      printf("Friend %d: ", i+1);
      scanf("%s", (ptr + i));
   }
   printf("Your friends are: ");
   for( i = 0; i < x; i++)
      printf("%s, ", *(ptr + i));
   free(ptr);
   system("pause");
   return 0;
}
