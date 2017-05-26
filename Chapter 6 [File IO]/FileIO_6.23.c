#include<stdio.h>
#include<stdlib.h>

struct sampleTag {
    char ch;
    int i;
    float f;
    double d;
};

int main ()
{
    struct sampleTag s;
    FILE *fp;
    
    fp = fopen("sample_05.dat", "rb");
    fread (&s, sizeof ( struct sampleTag), 1, fp );
    
    fprintf( stdout , "ch = %d, i = %d, f = %f, d = %lf\n",s.ch , s.i, s.f, s.d);
    
    fclose(fp);
    
    system("pause");
    return 0;
}
