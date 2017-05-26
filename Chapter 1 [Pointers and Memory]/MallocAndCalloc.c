
//Run this to see the difference between Malloc and Calloc


#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    int i;
    
    ptr = malloc(sizeof(int) * 10);
    
    for(i = 0; i < 10; i++)
        printf("Malloc. Index %d : %d\n", i, *(ptr + i));
        
    free(ptr);
    
    ptr = calloc(10, sizeof(int));
    
    for(i = 0; i < 10; i++)
        printf("Calloc. Index %d : %d\n", i, *(ptr + i));
        
    free(ptr);
    
    system("pause");
    return 0;
}
