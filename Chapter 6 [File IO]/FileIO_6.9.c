#include<stdio.h>
#include<stdlib.h>

int main ()
{
    char filename [40];
    char ch;
    FILE *fp;
    
    fprintf(stdout , " Input filename : ");
    fscanf(stdin , "%s", filename );
    
    if ((fp = fopen(filename , "r")) == NULL) 
    {
        fprintf( stderr , " ERROR: %s does not exist .\n", filename);
        exit(1);
    }
    
    while((fscanf (fp , "%c", &ch )) == 1)
    fprintf(stdout , "%c", ch);
    
    fclose(fp);
    system("pause");
    return 0;
}
