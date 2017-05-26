#include<stdio.h>
#include<stdlib.h>

struct sampleTag{
    int x;
    char ch;
};

int main()
{
    struct sampleTag *sample;
    
    printf("Size: %d\n", sizeof(struct sampleTag)); // Shows the size of struct sampleTag in bytes
    
    sample = malloc(sizeof(struct sampleTag)); // Allocates memory space for sample with the size of struct sampleTag
    
    sample->x = 5;
    sample->ch = 'B';
    
    printf("X:    %d\nCH:   %c\n", sample->x, sample->ch);
    
    system("pause");
    return 0;
}
