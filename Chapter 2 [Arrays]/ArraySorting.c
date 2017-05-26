#include<stdio.h>
#include<stdlib.h>

#define SIZE 5

int main()
{
    int array[SIZE]={};
    int i, j;
    int temp;
    
    for(i = 0; i <= SIZE - 1; i++)
    {
        printf("Array[%d] = ", i);
        scanf("%d", &array[i]);
    }
    
    /*sort from lowest to highest*/
    for(i = 0; i <= SIZE - 1; i++)
        for(j = i; j <= SIZE - 1; j++)
        {
            if(array[j] <= array[i])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    printf("\n");
        
    for(i = 0; i <= SIZE - 1; i++)
        printf("Array[%d] = %d\n", i, array[i]);
    
    system("pause");
    return 0;
}
