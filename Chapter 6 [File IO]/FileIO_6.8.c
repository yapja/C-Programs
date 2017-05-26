#include<stdio.h>
#include<stdlib.h>

int main( void)
{
    char ch;
    int i;
    float f;
    double d;
    FILE *fp;

    /* open input file */
    fp = fopen("sample.txt ", "r");

    /* read data from the file */
    fscanf(fp , "%c%d%f%lf", &ch , &i, &f, &d);

    /* write data to stdout */
    fprintf(stdout , "ch = %c, i = %d, f = %f, d = %lf\n", ch , i, f, d);

    /* close input file */
    fclose(fp);
    system("pause");
    return 0;
}
