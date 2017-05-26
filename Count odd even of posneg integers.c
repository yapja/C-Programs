#include <stdio.h>

main()
{
      int numPOdd = 0, numPEven = 0, numNOdd = 0, numNEven = 0, in;
      
      printf ("Enter positive integers. Terminate input with a number == 0.\n");
      do
      {
             scanf("%d",&in);
             if (in != 0)
             {
                    if (in < 0) // Scenario. If in is negative...
                    {
                           in *= -1; // Remove the negative by multiplying w/ -1
                           if (in % 2 == 0)
                              numNEven++;
                           else
                               numNOdd++;
                    }
                    else
                    {
                                 if (in % 2 == 0)
                                    numPEven++;
                                 else
                                    numPOdd++;
                    }
             }

      } while (in != 0);
      
      printf("Number of positive odd integers = %d\n",numPOdd);
      printf("Number of positive even integers = %d\n",numPEven);
      printf("Number of negative odd integers = %d\n",numNOdd);
      printf("Number of negative even integers = %d\n",numNEven);
      
      getch();
}
