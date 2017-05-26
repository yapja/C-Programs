#include<stdio.h>
#include<stdlib.h>

int main()
{
    /*
    int *ptr;
    
    if ((ptr = malloc(0)) == NULL)  // is negative size allowed?
        printf("Unsuccessful: no memory space allocated.\n");
    else {
        printf("Successful: memory space was allocated.\n");
        free(ptr);
    }
    */
    /*
    int *ptr = NULL;
    
    free(ptr);
    */
    
    int n;
    
    free(&n);
    
    
    int i;
    int *ptr;
    int *ptemp;
    
    /*allocate space for 5 integers*/
    if ((ptr = malloc(sizeof(int) * 5)) == NULL)
        exit(1);
    
    for (i = 0; i < 5; i++)
        *(ptr + i) = i * 5; /* initialize elements */
    
    ptemp = ptr + 3; /* ptemp points to the 2nd to the last element */
    free(ptr); /* can we free space used by the last two elements? */
    
    for(i = 0; i < 5; i++)
        printf("%d\n", *(ptr + i));
        
    /*
        Notes:
            I'm not sure what really happened...lol
    */
    
    system("pause");
    return 0;
}
