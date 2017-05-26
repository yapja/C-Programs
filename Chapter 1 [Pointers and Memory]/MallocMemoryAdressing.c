#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int i; 
    char *ptr;
    ptr = malloc(sizeof(char)* 5);

    for ( i = 0; i < 5; i ++)
        printf (" The address of element %d = %p \n" , i , ptr + i );

    *(ptr + 0) = 'a';
    *(ptr + 1) = 'b';
    *(ptr + 2) = 'c';
    *(ptr + 3) = 'd';
    *(ptr + 4) = 'e';
    
    for ( i = 0; i < 5; i ++)
        printf (" The address of element %d = %c \n" , i , *(ptr + i));
    
    exit(1);
    free(ptr);
    system("pause");
    return 0;
}
