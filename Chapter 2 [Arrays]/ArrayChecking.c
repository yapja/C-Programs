#include<stdio.h>
#include<stdlib.h>

int check_array(int array[], int value)
{
    int i;
    for(i = 0; i < 10; i++)
        if(value == array[i])
            return i + 1;
    return 0;
}

int main()
{
    int array[10]={10,9,8,7,6,5,4,3,2,1};
    int value;
    
    printf("Enter Value: ");
    scanf("%d", &value);
    
    printf("Same value in slot %d\n", check_array(array, value));
    
    system("pause");
    return 0;
}
