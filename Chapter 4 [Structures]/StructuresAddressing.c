#include<stdio.h>
#include<stdlib.h>

struct address{
   int x;
   int y[10];
   char ch;
   double dlad;
};

int main(void)
{
   struct address that;
   
   printf("%p\n%p\n%p\n%p\n", &that.x, that.y , &that.ch, &that.dlad);
   
   system("pause");
   return 0;
}
