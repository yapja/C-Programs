#include<stdio.h>
#include<stdlib.h>

typedef char String10 [11];

int main ()
{
   /* keywords is declared / defined as an array of String10 .
   We show the initialization for the 1st 5 keywords only. */
   String10 keywords[32] = {"auto", "break", "case", "char", "const"
                           ,"continue","default","do","double", "else"
                           ,"enum", "extern", "float", "for", "goto", "if"
                           ,"int", "long", "register", "return", "short"
                           ,"signed", "sizeof", "static", "struct", "switch"
                           ,"typedef", "union", "unsigned", "void", "volatile"
                           ,"while"};
   int i;
   
   printf ("The C keywords are :\n\n");
   for (i = 0; i < 32; i++)
      printf ("\t%s\n", keywords [i]);
   
   system("pause");
   return 0;
}
