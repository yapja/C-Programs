#include<stdio.h>
#include<stdlib.h>
    
int main ()
{
    int i;
    int A [5];
    FILE *fp;
    /* read data to binary file */
    fp = fopen("sample_04.dat", "rb");
    fread(A, sizeof (int ), 5, fp );
    fclose(fp);
    
    for(i = 0; i < 5; i++)
    fprintf( stdout , "A[%d] = %d\n", i, A[i ]);
    
    system("pause");
    return 0;
}
