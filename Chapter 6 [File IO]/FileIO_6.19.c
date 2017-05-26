#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    char ch;
    
    fp = fopen("sample_01.dat", "rb");
    fread (&ch, sizeof (char), 1, fp );
    fprintf ( stdout , "ch = %c\n", ch );
    fclose (fp );
    
    system("pause");
    return 0;
}
