#include<stdio.h>
#include<stdlib.h>

int main ()
{
    char ch = 'A';
    int i = 123;
    float f = 4.56789;
    double d = 3.1415159;
    
    FILE *fp;
    
    fp = fopen("sample_02.dat", "wb");
    
    fwrite(&ch, sizeof(char), 1, fp);
    fwrite(&i, sizeof(int), 1, fp);
    fwrite(&f, sizeof(float), 1, fp);
    fwrite(&d, sizeof(double), 1, fp);
    
    fclose (fp);
    system("pause");
    return 0;
}
