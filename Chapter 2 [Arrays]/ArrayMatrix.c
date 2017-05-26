#include<stdio.h>
#include<stdlib.h>

#define SIZE 3

int main()
{
    int CharacterMatrix[SIZE][SIZE]={ {'A','B','C'},
                                {'D','E','F'},
                                {'G','H','I'}};
    int i, j;
    
    for(i = 0; i < SIZE; i++)
    {
        for(j = 0; j < SIZE; j++)
            printf("[%c]", CharacterMatrix[i][j]);
        printf("\n");
        }
        
    system("pause");
    
    return 0;
}
