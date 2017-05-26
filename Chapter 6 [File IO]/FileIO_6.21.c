#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int count;
    int value;
    FILE *fp;
    
    fp = fopen("sample_03.dat", "rb");
    
    while((count = fread(& value , sizeof ( int), 1, fp )) == 1)
    fprintf(stdout , "count = %d, value = %d\n", count , value);
    
    fclose(fp);
    system("pause");
    return 0;
}
