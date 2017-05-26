#include<stdio.h>
#include<stdlib.h>

struct sampleTag{
    int x;
    char ch;
};

int main()
{
    struct sampleTag *sample;
    int i;
    int size;
    
    scanf("%d", &size);
    
    sample = malloc(sizeof(struct sampleTag) * size); // Dynamically Allocates multiple memory space for sample with the size of struct sampleTag
    
    for(i = 0; i < size; i++)
    {
        (sample + i)->x = i;
        (sample + i)->ch = i + 65;
    }
    
    for(i = 0; i < size; i++)
    {
        printf("%d ", (sample + i)->x);
        printf("%c \n",(sample + i)->ch);
    }
    
    system("pause");
    return 0;
}
