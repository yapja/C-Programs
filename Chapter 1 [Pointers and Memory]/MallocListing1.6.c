#include<stdio.h>
#include<stdlib.h> /* DON ’T forget to include this file */

int main ()
{
    int i ; /* i is the element ’s index */
    int * ptr ; /* ptr is the base address */
    ptr = malloc ( sizeof ( int ) * 3);

    /* display the address of each element */
    for ( i = 0; i < 3; i ++)
        printf (" The address of element %d = %p \n" , i , ptr + i );

    /*Assigning values on each element*/
    *(ptr + 0) = 5;
    *(ptr + 1) = 10;
    *(ptr + 2) = 15;
    
    /* display the address of each element after assignment*/
    for ( i = 0; i < 3; i ++)
        printf (" The address of element %d = %d \n" , i , *(ptr + i));

    /* we will not store any value for now ... */
    free(ptr);
    system("pause");
    return 0;
}
