#include<stdio.h>

int main ()
{
    char filename [40];
    int i;
    FILE *fp;
    
    fprintf(stdout , "Input filename : ");
    fscanf(stdin , "%s", filename );
    
    fp = fopen(filename , "w");
    
    for (i = 0; i < 5; i++)
    fprintf (fp , "%d\n", i);
    
    fclose(fp);
    return 0;
}
