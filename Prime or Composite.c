#include <stdio.h>

int isPrimeOrComposite(int x)
{
    int i=2, div=1;
    while(i<=x)
    {
        if(x%i == 0)
        {
               div++;
        }
        i++;
    }
        if(div==2)
            printf("Prime\n");
        else
            printf("Composite\n");
}

main()
{
    int x;
    scanf("%d", &x);
    isPrimeOrComposite(x);
    getch();
}
