#include <stdio.h>
#include <string.h> /* don ’t forget to include this file */

int main ()
{
   char str[4] = "ABC";
   char name[21];

   printf ("The length of str is %d\n\n", strlen(str));
   printf ("Input your name (max. of 20 chars): ");
   scanf("%20s", name);
   
   printf (" The length of your name is %d characters.\n", strlen(name));
   
   system("pause");
   return 0;
}
