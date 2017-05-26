#include<stdio.h>

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
    
    /* initialize structure members */
    s.ch = 'A';
    s.i = 123;
    s.f = 4.56789;
    s.d = 3.1415159;
    
    /* write structure into file */
    fp = fopen("sample_05.dat", "wb");
    fwrite (&s, sizeof ( struct sampleTag), 1, fp );
    fclose (fp );
    return 0;
} 
