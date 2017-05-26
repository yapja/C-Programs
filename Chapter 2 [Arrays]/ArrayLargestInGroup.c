#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int array[10]={};
    int i;
    int largest = 0;
    srand(time(NULL));
    for(i=0;i<10;i++)
        array[i] = rand();
    
    for(i=0;i<10;i++)
    {
        printf("%d\n", array[i]);
        if(array[i] > largest)
            largest = array[i];
    }
    printf("Largest: %d\n", largest);
    
    system("pause");
    return 0;
}
