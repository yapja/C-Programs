#include<stdio.h>
#include<stdlib.h>

int Sum(int array[], int n)
{
   int i;
   int sum = 0;
   for(i = 0; i < 5; i++)
        sum += array[i];
   return sum;
}

int main()
{
    int array[5]={1,2,3,4,5};
    int i;
    
    for(i = 0; i < 5; i++)
        scanf("%d", &array[i]);
    
    printf("Average: %d", Sum(array, 5));
    
    system("pause");
    return 0;
}
