/*Listing 1.4*/

# include<stdio.h>
# include<stdlib.h> /* DON ’T forget to include this file */
int main ()
{
    int *ptr ;
    
    /* allocate memory for one integer */
    ptr = malloc(sizeof(int));
    
    /* display the address of the 1 st byte */
    printf(" The allocated space has an address of %p  \n" , ptr);
    
    /* initialize the value of allocated space */
    *ptr = 123;
    printf(" Value is %d \n" , *ptr);
    
    /* release memory */
    free(ptr);
    system("pause");
    return 0;
}
