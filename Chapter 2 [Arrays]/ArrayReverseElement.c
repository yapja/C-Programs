#include<stdio.h>
#include<stdlib.h>

#define SIZE 5
#define FALSE 0
#define TRUE !FALSE

void SwapElements(int *A, int *B)
{
   int temp;
   
   temp = *A;
   *A = *B;
   *B = temp;
}

void SortElements(int A[], int n)
{
   int i;
   int Sorted = 0;
   
   while(!Sorted){
      for(i = 0; i < n - 1; i++)
         if(A[i] < A[i + 1]){
            SwapElements(&A[i], &A[i + 1]);
            Sorted = 0;
         }
         else Sorted = 1;
   }
}

void InputElements(int A[], int n)
{
   int i;
   for(i = 0; i < n; i++){
      printf("Input Elements: ");
      scanf("%d", &A[i]);
   }
}
void PrintElements(int A[], int n)
{
   int i;
   for(i = 0; i < n; i++)
      printf("Element [%d]: %d\n", i ,A[i]);
}

int main()
{
   int A[SIZE];
   
   InputElements(A, SIZE);
   PrintElements(A, SIZE);
   printf("\nSort ing Elements from lowest to highest...\n\n");
   SortElements(A, SIZE);
   PrintElements(A, SIZE);
      
   system("pause");
   return 0;
}
