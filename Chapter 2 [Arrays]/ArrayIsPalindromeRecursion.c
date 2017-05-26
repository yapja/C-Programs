#include<stdio.h>
#include<stdlib.h>

int isPalindrome(int a[], int start, int end)
{
   if(a[start] > a[end])
      return 1;
   else if(a[start] != a[end])
      return 0;
   else return isPalindrome(a, start + 1, end - 1);
}

int main()
{
   int array[10]={1,2,3,4,5,5,4,3,2,1};
   
   printf("%d", isPalindrome(array, 0, 10));
   
   system("pause");
   return 0;
}
