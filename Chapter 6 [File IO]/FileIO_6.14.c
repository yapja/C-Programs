#include<stdio.h>
#include<stdlib.h>

int main ()
{
    FILE *fp;
    char ch ;
    
    ch = 'A';
    
    fp = fopen("sample_01.dat", "wb");
    fwrite(&ch ,sizeof(char), 1, fp );
    fclose(fp);
    
    system("pause");
    return 0;
}
