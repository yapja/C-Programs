#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr;
    int number;
    float result;
    int i;
    
    printf("Number of Quizzes: ");
    scanf("%d", &number);
    
    ptr = malloc(sizeof(int) * number);
    result = 0;
    
    for(i = 0; i < number; i++)
    {
        printf("Quiz %d: ", i + 1);
        scanf("%d", (ptr + i));
        }
    
    for(i = 0; i < number; i++);
        result += *(ptr + i);
    
    result = result / number;
    
    printf("Average of Quizzes : %.2f\n", result);
    
    free(ptr);
    
    system("pause");
    return 0;
}
