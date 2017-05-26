#include<stdio.h>
#include<stdlib.h>

#define SIZE 20

int main()
{
    int *ptr;
    int i;
    
    ptr = malloc(sizeof(int) * 5);
    
    printf("Address of ptr: %p\n", &ptr);
    printf("Pointer of ptr: %p\n", ptr);
    
    for(i = 0; i < SIZE; i++)
        printf("Increment pointer by %d: %p\n",i, ptr + i);
    
    free(ptr);
    
    system("pause");
    return 0;
}
