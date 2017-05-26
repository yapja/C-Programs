#include<stdio.h>
#include<Stdlib.h>

struct innerTag{
    int world[10];
};

struct secondTag{
    int x;
};

struct sampleTag{
    struct innerTag inner; /* Nested Structure */
    struct secondTag second[10];
};

//<return type>  ||<name> (<parameters>)
void fillup (struct sampleTag *ptr) // (struct sampleTag ptr[]) will also work
{
    int i, j;
    for(i=0;i<5;i++)                                    //  Filling up the arrays
        for(j=0;j<10;j++)                               //  Using a nested for loop and
            ptr[i].inner.world[j] = j + (i * 10);       //  

}

int main()
{
    int i, j;
    struct sampleTag hello[5]; /* hello is an array of 10 struct sampleTag */
    struct sampleTag there;
    
    fillup(hello);    //Fills up the array of structures using a function

    for(i=0;i<5;i++)                                    //  Displaying
        for(j=0;j<10;j++)                               //  Using a nested for loop
            printf("%d ", hello[i].inner.world[j]); 
              
    system("pause");
    return 0;
}
