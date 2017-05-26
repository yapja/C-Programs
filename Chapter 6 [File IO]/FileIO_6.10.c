#include<stdio.h>
#include<stdlib.h>

int main ()
{
    char source_filename [40];
    char dest_filename[40];
    char ch;
    FILE * fp_source;
    FILE * fp_dest ;
    
    fprintf(stdout , "Input source filename : ");
    fscanf(stdin , "%s", source_filename);
    
    /* open source file */
    if((fp_source = fopen(source_filename , "r")) == NULL)
    {
        fprintf ( stderr , "ERROR: %s does not exist .\n", source_filename);
        exit(1);
    }
    
    fprintf(stdout , "Input destination filename : ");
    fscanf(stdin , "%s", dest_filename);
    
    /* open destination file in "w" mode */
    fp_dest = fopen(dest_filename , "w");
    
    /* copy one character at a time from source to dest. */
    while ((fscanf (fp_source , "%c", &ch )) == 1)
        fprintf (fp_dest , "%c", ch );
    
    fclose(fp_source);
    fclose(fp_dest );
    system("pause");
    return 0;
}
