#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    
    ptr = malloc(sizeof(int));
    
    *ptr = 5;
    
    printf("Address of ptr: %p\n", &ptr);
    printf("Address where ptr is pointing at: %p\n", ptr);
    printf("Value in where ptr is pointing at: %d\n", *ptr);
    
    free(ptr);
    
    system("pause");
    return 0;
}
