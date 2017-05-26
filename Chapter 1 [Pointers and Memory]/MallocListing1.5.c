/*Listing 1.5*/

#include<stdio.h>
#include<stdlib.h> /* DON ’T forget to include this file */

int main ()
{
    int *ptr;
    int *x;
    
    /* allocate a block of memory for storing three integers */
    ptr = malloc(sizeof(int) * 3);
    x = ptr;
    x += 12;
    
    /* display the address of the 1 st byte */
    printf(" The address of the 1 st byte is = %p \n", ptr);
    printf(" The address of the 1 st byte is = %p \n", x);
    

    
    /* we will not store any value for now ... */

    /* release memory */
    free(ptr);
    system("pause");
    return 0;
}
