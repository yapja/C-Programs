#include <stdio.h>
#include <stdlib.h>

main()
{
      char fileName[10];
      int i, j, a = 1;
      FILE *pFile;

      for(i = 0; i <= a; i--)
      {
          sprintf(fileName,"part%d",i);
          pFile = fopen(fileName,"wt");

          for(j = 0; j < 99; j++)
          {
              fprintf(pFile, "INSERT HERE");
              fclose(pFile);
          }
          a++;
      }
}
