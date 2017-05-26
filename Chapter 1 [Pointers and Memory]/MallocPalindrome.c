#include<stdio.h>
#include<stdlib.h>

/* Function countDigits() accepts as parameter an integer num and returns its number of digits.
Example: if num = 9807, function returns 4 */
int countDigits (int num)
{
   /* declare your local variables and write your code here */
   int count;
   
   count = 0;
   
   while(num > 0)
   {
      num = num / 10;
      count++;
   }
   
   return count;
}

/* Function initList() creates a list pointing to a space in the heap containing one digit each of the values in num. 
Example: if num = 9807, the space in the heap will contain 9, 8, 0, and 7. */
/*return type */void *initList (int num, int nDigits, int *pList)
{ 
   /* declare your local variables and write your code here */
   int i;
   
   pList = malloc(sizeof(int) * nDigits);

   for(i = 0; i < nDigits; i++)
   {
      *(pList + (nDigits - 1) - i) = num % 10;
      num = num / 10;
   }
   return pList;
}
/* Function appendList() adds entries to the heap space with the values in num. 
//Example: if num = 7089, the space in the heap will now contain 9,8,0,7,7,0,8,9 */
void appendList (int num, int **pList, int nDigits1, int nDigits2)
{ 
   /* declare your local variables and write your code here */
   int i;
   int size;
   
   size = nDigits1 + nDigits2;
   
   *pList = realloc(*pList, sizeof(int) * size);
   
   for(i = size - 1; i >= nDigits1; i--)
   {
      *(*pList + i) = num % 10;
      num = num / 10;
   }
}

/* Function displayLongNum() displays the entries in the heap digit per digit */
void displayLongNum (int *pList, int nDigitsL, int nDigitsR)
{ 
   /* declare your local variables and write your code here */
   int i;
   int size;

   size = nDigitsL + nDigitsR;
   
   for(i = 0; i < size; i++)
   {
      printf("[%d]", *(pList + i));
   }
   printf("\n");
}

/* Function isPalindrome() returns 1 if the values in the heap is a palindrome. Otherwise, the function returns 0. A palindrome is something that when read forward is the same when read backward.
Example: if heap contains 5 elements namely: 1,2,3,2,1return 1.
Example: if heap contains 4 elements namely: 1,2,2,1 return 1.
Example: if heap contains 4 elements namely: 1,0,2,1 return 0. */
int isPalindrome(int *pList, int nDigitsL, int nDigitsR/* indicate parameter/s */ )
{ 
   /* declare your local variables and write your code here */
   int i;
   int size;
   int palindrome;
   
   size = nDigitsL + nDigitsR;
   palindrome = 1;
   i = 0;
   
   while(palindrome && i < nDigitsL)
   {
        if(*(pList + i) == (*(pList + (size - 1) - i)));
        else palindrome = 0;
        i++;
    }
   return palindrome;
}

int main()
{ 
   int *pList1;
   int nValL, nValR, nDigitsL, nDigitsR;
   
   printf("Enter number: ");
   scanf("%d", &nValL); /* Assume nValL is a non-negative integer */

   /* call countDigits() to count the number of digits in nValL*/
   nDigitsL = countDigits(nValL);
   printf("nDigitsL : %d\n", nDigitsL);
   /* call initList() to have pList1 to point to a dynamic list containing the digits in nValL */
   pList1 = initList(nValL, nDigitsL, pList1);
  
   printf("Enter number: ");
   scanf("%d", &nValR); /* Assume nValR is a non-negative integer */

   /* call countDigits() to count the number of digits in nValR*/
   nDigitsR = countDigits(nValR);
   printf("nDigitsR : %d\n", nDigitsR);
   /* call appendList() to have pList1 point to a dynamic list to add the digits of nValR at the end of the original list */
   appendList(nValR, &pList1, nDigitsL, nDigitsR);

   /* call function displayLongNum() */
   displayLongNum(pList1, nDigitsL, nDigitsR);
   /* call function isPalindrome() and check if the result is 1, then display Palindrome, else display Not a Palindrome */
   if(isPalindrome(pList1, nDigitsL, nDigitsR))
        printf("\nPalidrome\n");
   else printf("\nNot a Palidrome\n");
   
   free(pList1);
   
   system("pause");
   return 0;
}
