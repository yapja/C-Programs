/*
Write a loop that computes the average of X array entries.
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int array[5]={1,2,3,4,5};
    int i;
    int total = 0;
    
    for(i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
    }
    for(i = 0; i < 5; i++)
    {
        total += array[i];
    }
    printf("Average: %d", total / i);
    
    system("pause");
    return 0;
}
