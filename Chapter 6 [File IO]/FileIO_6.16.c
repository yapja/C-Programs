#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i;
    int n;
    int * ptr ;
    FILE *fp;
    
    /* input number of integer elements to dynamically allocate */
    printf (" Input n: ");
    scanf("%d", &n);
    
    if(( ptr = malloc ( sizeof (int ) * n)) == NULL) {
    fprintf ( stderr , " ERROR: not enough memory .");
    exit(1);
    }
    /* initialize elements */
    for(i = 0; i < n; i++)
    *(ptr + i ) = i * 5;
    
    /* write data to binary file */
    fp = fopen("sample_03.dat", "wb");
    fwrite(ptr , sizeof ( int ), n, fp );
    fclose(fp);
    free(ptr);
    
    return 0;
}
