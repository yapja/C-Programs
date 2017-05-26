#include<stdio.h>
#include<stdlib.h>

int main ()
{
    char filename [40];
    int i, n;
    FILE *fp;
    
    fprintf(stdout , "Input filename : ");
    fscanf(stdin , "%s", filename );
    
    /* open file in "a" mode ( append ) */
    fp = fopen( filename , "a");
    
    /* ask the user to input 3 integers , output each integer to the text file */
    for(i = 0; i < 3; i++) 
    {
        fprintf(stdout , "Input an integer value: ");
        fscanf(stdin , "%d", &n);
        
        /* output data to file */
        fprintf(fp , "%d\n", n);
    }
    
    fclose(fp);
    return 0;
}
