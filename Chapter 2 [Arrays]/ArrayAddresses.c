#include<stdio.h>
#include<stdlib.h>

#define SIZE 5

int main()
{
    int A[SIZE]={};
    int i;
    
    printf("Address of A[] : %p\n", &A);
    printf("Address of A[] : %p\n", A);

    for(i = 0; i < SIZE; i++)
        printf("Address of A[%d] using & : %p\n", i, &A[i]);
    for(i = 0; i < SIZE; i++)
        printf("Address of A[%d] using Address Arithmetic: %p\n", i, A + i);
        
    system("pause");
    return 0;
}
