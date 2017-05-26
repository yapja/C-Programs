#include<stdio.h>

int main ()
{
    int i;
    int A[5];
    FILE *fp;
    
    /* initialize array elements */
    for (i = 0; i < 5; i++)
    A[i] = i * 100;
    
    /* write data to binary file */
    fp = fopen("sample_04.dat", "wb");
    fwrite(A, sizeof (int), 5, fp );
    fclose(fp);
    return 0;
}
