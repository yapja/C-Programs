#include <stdio.h>
#include <conio.h>

float getC (float F)
{
      float C = (F - 32) * 5 / 9;
      
}

int main()

{
      
      float F, C;
      printf("This program converts Fahrenheit to Celsius.\n");
      printf("Enter Fahrenheit: ");
      scanf("%f",&F);



      C = (F - 32) * 5 / 9;
          printf("\nCelsius: %.2f", C);
          getch();
          
}
