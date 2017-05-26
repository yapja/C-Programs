#include <stdio.h>
#include <conio.h>

float getArea (float Base, float Height)
{
      float Area = 0.5 * Base * Height;
      return Area;
}

int main()

{
      
      float Base, Height, Area;
      printf("This program gets the area of a triangle, given the base and height.\n");
      printf("Enter Base: ");
      scanf("%f",&Base);

      if(Base <= 0)

      {
              printf("\nYou cannot enter 0 or a negative base!");
              getch();
              return 0;
      }

      printf ("Enter Height: ");
      scanf("%f",&Height);

      if(Height <= 0)

          {
          printf("\nYou cannot enter 0 or a negative height!");
          getch();
          return 0;
          }

          Area = getArea(Base, Height);
          printf("\nThe area is %.2f", Area);
          getch();
          
}
