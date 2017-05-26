#include<stdio.h> // Standard library for basic input and output
#include<stdlib.h>
#include<string.h> // This contains the functions for strings( strcpy, strlen, strcmp, etc)

/*
   Strings are an array of characters
   You declare them the same way you declare other arrays
      char word[20];
   word is now an array of 20 characters. 
   It can contain a total of 19 characters.
   19, because the last character should always be reserved for the null byte character. '\0' <-- This one.
   The null byte character determines the end of the string.
   A string would look like this
      char string[10] = "Hello!";
      
   
   Array elements :  [ 'H' ] [ 'e' ] [ 'l' ] [ 'l' ] [ 'o' ] [ '!' ] [ '\0' ] [ ? ] [ ? ] [ ? ]
   Index number   :     0       1       2       3       4       5       6       7     8     9

   Common functions for strings include
   
      strcpy(string 1, string 2) - string 2 overwrites everything in string 1
      strcmp(string 1, string 2) - both strings are compared
      strlen(string) - returns the length of the string in integer excluding the null byte
      strcat(string 1, string 2) - adds string 2 at the end of string 1
*/

int main()
{
   char name[30]; // String declaration with a maximum of 29 characters. Last character byte is always reserved for the null byte or '\0'
   char message[10] = "Welcome!"; // String definition
   char string[20];
   int i; // Counter for loops
   
   printf("What is your first name? ");
   scanf("%s", name); // Asks for input from the user. String input will be stored in name. No need for ampersand(or the address-of operator
                      // since name(the name of the string/array) stands for the base address.
                      
   printf("\n%s %s\n", message, name); // Displays both strings, name and message, using printf and %s( string format )
   
   
   printf("Your name is %d characters long\n", strlen(name)); // Using the function strlen(), You'll be able to know how long the string is.
                                                              // its parameter is a string and it returns an integer
                                      
   for(i = 0; name[i] != '\0' ; i++)  // Using the null byte to determine when to stop the loop.
      printf("%d ", name[i]); // Displaying the ascii values of each character in name
                                                              
   printf("\n\nWhat is your last name? ");
   scanf("%s", string); // Input is stored in the array string.
   
   printf("Let us compare your first name and last name...\n");
   
   if(strcmp(name, string) == 1)          // The function strcmp compares the string and returns 1 if string1(name) is shorter than string2(string) or
                                          // Both strings are equal in length but not in content
      printf("Your first name and last name are equal in length or your\nfirst name is shorter than your last name\n\n");
   else if(strcmp(name, string) == -1)    // returns -1 if string1 is longer than string 2
      printf("Your first name is longer than your last name\n\n");
   else        // The function returns 0 if they are totally equal in both length and content
      printf("Your names have equal?!\n\n");
   
   
   strcat(name, " ");     // Using the function strcat, I add a space character at the end of your first name
   strcat(name, string);  // Using the same function, I add your last name after the space
                          // Now your first name and last name are now combined into one whole name
   
   strcpy(string, "Good Bye!"); // Copies "Good Bye!" to the array string
   
   printf("Your complete names is %s \n", name); // Displays your whole name
   
   printf("%s\n", string);
   
   system("pause");
   return 0;
}
