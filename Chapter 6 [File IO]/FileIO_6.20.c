#include<stdio.h>
#include<stdlib.h>

int main()
{
    char ch;
    int i;
    float f;
    double d;
    FILE *fp;
    
    fp = fopen("sample_02.dat", "rb");
    
    fread(&ch,sizeof (char), 1, fp );
    fread(&i, sizeof (int ), 1, fp );
    fread(&f, sizeof (float ), 1, fp );
    fread(&d, sizeof (double ), 1, fp );
    
    fprintf(stdout , "ch = %c, i = %d, f = %f, d = %lf\n", ch , i, f, d);
    
    fclose(fp);
    
    system("pause");
    return 0;
}
