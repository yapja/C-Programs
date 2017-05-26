#include<stdio.h>
#include<stdlib.h>

void ConvertUpper(char S[], int n)
{
   int i;
   for(i = 0; i < n; i++)
      if(S[i] >= 97 && S[i] <= 122)
         S[i] -= 32;
}

int main()
{
   char S[5]={};
    
   scanf("%s", S);
        
   ConvertUpper(S, 5);
   
   printf("%s", S);
   
   system("pause");
   return 0;
}
