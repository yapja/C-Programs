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

int main()
{
    int i, j;
    struct sampleTag hello[5]; /* hello is an array of 10 struct sampleTag */
    struct sampleTag there;
    
    hello[0].inner.world[0] = 5;  /*   Assigning 5 to the first element of world
                                   *   inside inner, that's inside the first element of hello
                                   */
                                   
    there.second[0].x = 10; /* Assigning 10 to the variable x inside the first element of second inside there */
    
    printf("%d\n", hello[0].inner.world[0]); /* Displaying the values */
    printf("%d\n", there.second[0].x);
    
    
    
    for(i=0;i<5;i++)                                    //  Filling up the arrays
        for(j=0;j<10;j++)                               //  Using a nested for loop
            hello[i].inner.world[j] = j + (i * 10);     //
            
            
            
    for(i=0;i<5;i++)                                    //  Displaying
        for(j=0;j<10;j++)                               //  Using a nested for loop
            printf("%d ", hello[i].inner.world[j]); 
              
    system("pause");
    return 0;
}
