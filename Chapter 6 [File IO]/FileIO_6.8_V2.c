#include<stdio.h>
#include<stdlib.h>

int main( void)
{
    char ch[10];
    FILE *fp;
    
    /* open input file */
    fp = fopen("sample.txt ", "r");
    
    /* read data from the file */
    fscanf(fp , "%s", ch);
    
    /* write data to stdout */
    fprintf(stdout , "%s\n", ch);
    
    /* close input file */
    fclose(fp);
    system("pause");
    return 0;
}
