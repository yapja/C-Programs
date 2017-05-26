#include<stdio.h>

int main ()
{
    int n;
    
    /* no need to call fopen () and fclose () with stdin and stdout */
    fprintf( stdout , "Input an integer value: ");
    fscanf(stdin , "%d", &n);
    fprintf( stdout , "n = %d\n", n);
    getch();
    return 0;
}
