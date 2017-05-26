#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef char String20[21];
typedef char String50[51];

void Input(String50 prompt , String20 str)
{
   printf ("%s", prompt);
   scanf("%20s", str );
}

void Greet( String20 lastname , String20 firstname)
{
   String50 greet;
   
   strcpy ( greet , "Hello"); /* note space after ’0’ */;
   strcat ( greet , firstname);
   strcat ( greet , " ");
   strcat ( greet , lastname );
   strcat ( greet , "!How are you today?");
   
   printf ("%s\n", greet );
}

int main ()
{
   String20 lastname ;
   String20 firstname;
   
   Input("Enter your last name: ", lastname);
   Input("Enter your first name: ", firstname);
   Greet( lastname , firstname);
   
   system("pause");
   return 0;
}
