#include<stdio.h>
#include<stdlib.h>

#define SIZE 5

void InputElements(int A[], int n)
{
    int i;
    
    for(i = 0; i < n; i++) {
    printf ("Input the value of element in %d : ", i);
    scanf ("%d" , &A[i]);
}
}


void PrintElements(int A[], int n, int ch)
{
    int i;
    printf("\nList of  Elements in %c[]: ", ch);
    for(i = 0; i < n; i++)
        printf ("[%d] ", A[i]);
}

void ReversedPrintElements(int A[], int n)
{
    int i;
    printf("\nReverved Elements in A[]: ");
    for(i = n - 1; i >= 0; i--)
        printf ("[%d] ", A[i]);
}

int GetSum(int A[], int n)
{
    int i;
    int sum;
    
    sum = 0;
    
    for(i = 0; i < n; i++)
        sum += A[i];
        
    return sum;
}

int CountPositive(int A[], int n)
{
    int i;
    int positive;
    
    positive = 0;
    
    for(i = 0; i < n; i++)
        if(A[i] > 0)
            positive++;
    
    return positive;
}

int CountNegative(int A[], int n)
{
    int i;
    int negative;
    
    negative = 0;
    
    for(i = 0; i < n; i++)
        if(A[i] < 0)
            negative++;
    
    return negative;
}

int Search(int A[], int n, int key)
{
    int i;
    
    for(i = 0; i < n; i++)
    {
        if(A[i] == key)
            return i;
    }
    return -1;
}

void RotateRight(int A[], int n, int x)
{
    int i, j;
    int temp;
    
    for(j = 1; j <= x; j++)
    {
        for(i = n - 1; i >= 1; i--)
        {
            temp = A[i];
            A[i] = A[i - 1];
            A[i - 1] = temp;
        }
    }
}

void RotateLeft(int A[], int n, int x)
{
    int i, j;
    int temp;
    
    for(j = 1; j <= x; j++)
    {
        for(i = 0; i < n - 1; i++)
        {
            temp = A[i];
            A[i] = A[i + 1];
            A[i + 1] = temp;
        }
    }
}

void CopyArray(int A[], int B[], int n)
{
    int i;
    for(i = 0; i < n; i++)
        B[i] = A[i];
}

void ReversedCopyArray(int A[], int B[], int n)
{
    int i;
    for(i = 0; i < n; i++)
        B[i] = A[n - 1 - i];
}

int main ()
{
    int A[SIZE], B[SIZE];
    int input;
    
    InputElements(A, SIZE);
    printf("\n");
    PrintElements(A, SIZE, 'A');
    printf("\n");
    PrintElements(B, SIZE, 'B');
    printf("\n");
    ReversedPrintElements(A , SIZE);
    printf("\nSum of Elements: %d\n", GetSum(A, SIZE));
    printf("Number Positive of Elements: %d\n", CountPositive(A, SIZE));
    printf("Number Negative of Elements: %d\n", CountNegative(A, SIZE));
    printf("Number to search: ");
    scanf("%d", &input);
    printf("Key is Found on Index: %d\n", Search(A, SIZE, input));
    printf("\nNumber of Rotation to Right: ");
    scanf("%d", &input);
    RotateRight(A, SIZE, input);
    PrintElements(A, SIZE, 'A');
    printf("\nNumber of Rotation to Left: ");
    scanf("%d", &input);
    RotateLeft(A, SIZE, input);
    PrintElements(A, SIZE, 'A');
    printf("\n\nCopying A[] To B[]");
    CopyArray(A, B, SIZE);
    PrintElements(B, SIZE, 'B');
    printf("\n\nCopying A[] To B[] in Reversed Order");
    ReversedCopyArray(A, B, SIZE);
    PrintElements(B, SIZE, 'B');
    
    system("pause");
    return 0;
}
