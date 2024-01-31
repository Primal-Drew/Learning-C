#include <stdio.h>
int main()
{
   int c, *pc;

   c = 5;

   pc = &c;

   printf("Value of c:%d",c);

   printf("Adress of c:%p\n",&c);

   printf("Address pc points to:%p\n", pc);

   printf("Actual address of pc:%p\n",&pc);

   printf("Value at pc;%d\n\n\n", *pc);


   printf("CHANGING THE VALUES USING A POINTERS.\n\n");

   *pc = 10;

   printf("New value of c:%d\n",c);

   int* p1;

   p1= (pc+1);

   printf("Value of p+1;%p\n",&p1);

   printf("Using p1 to derefence c\n");

   *(p1-1) = 7;

   printf("Value of c:%d",c);



   return 0;
}