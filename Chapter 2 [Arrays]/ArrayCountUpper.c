#include<stdio.h>
#include<stdlib.h>

int ConvertUpper(char S[], int n)
{
   int i;
   int count = 0;
   for(i = 0; i < n; i++)
      if(S[i] >= 65 && S[i] <= 90)
         count ++;
         
   return count;
}

int main()
{
   char S[5]={};
    
   scanf("%s", S);
        
   printf("Number of UpCase: %d\n", ConvertUpper(S, 5));
   
   printf("%s\n", S);
   
   system("pause");
   return 0;
}
