#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* Return: Always 0 (Success)
*/

int main(void)
{
 int a = ' '; //initialize the int variable a to 'space'
 int b = ','; //initialize the int variable b to comma
 int w = 48, x, y, z;

 while (w < 58)
 {
   x = 48;
   while (x < 58)
   {
       y = 48;
       while (y < 58)
       {
           z = 49;
           while (z < 58)
           {
             putchar(w);
             putchar(x);
             putchar(a);
             putchar(y);
             putchar(z);
             putchar(b);
             putchar(a);

             z++;
             if (z == 57)
             {
                 z =
             }
           }
           y++;
       }
       x++;
   }
   w++;

 }

 return (0);
}
