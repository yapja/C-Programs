#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp_input;
    FILE *fp_output;
    
    fp_output = fopen("sample.txt", "w");
    
    fclose(fp_output);
    
    system("pause");
    return 0;
}
