#include<stdio.h>
#include<stdlib.h>

struct dataTag{
    int x;
};

struct sampleTag{
    struct dataTag data;
};

void display_data(struct dataTag data)
{
    printf("%d\n", data.x);
}

void address_data(struct dataTag *data)
{
    printf("%p\n", data);
}

int main()
{
    struct sampleTag *sample;
    
    sample = malloc(sizeof(struct sampleTag));
    
    sample->data.x = 5;
    
    display_data(sample->data);
    address_data(&sample->data);
    
    system("pause");
    return 0;
}
