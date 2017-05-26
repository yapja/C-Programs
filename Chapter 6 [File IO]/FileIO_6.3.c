#include<stdio.h>
#include<stdlib.h>

int main ()
{
    /* no need to call fopen () with stdout */

    fprintf(stdout , " Hello world !\n");
    fprintf(stdout, "%d\n", 123);
    fprintf(stdout, "%f\n", 6.3745674123456);
    fprintf(stdout, "%.2f\n", 6.3745674);

    /* no need to call fclose () with stdout */
    system("pause");
    return 0;
}
