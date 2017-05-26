#include<stdio.h>
#include<stdlib.h>

int main()
{
    char ch = 'A';
    int i = 123;
    float f = 4.0;
    double d = 3.1415159;

    FILE *fp;

    fp = fopen("sample.txt", "w");
    fprintf (fp , "%c %d %.2f %lf", ch , i, f, d);
    fclose(fp);
    system("pause");
    return 0;
}
