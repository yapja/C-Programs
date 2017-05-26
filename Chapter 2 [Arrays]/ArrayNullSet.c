#include<stdio.h>
#include<stdlib.h>

int main()
{
    int array[5]={};
    int i;
    
    for(i = 0; i < 5; i++)
        printf("[%d]", array[i]);
        
    system("pause");
    return 0;
}
