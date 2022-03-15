#include<stdio.h>

/**
* main - Prints first 50 fibonnaci numbers
*
* Return: Always 0.
*/
int main()
{
   long int a = 1, b = 2, c, count = 0;
   while (count < 50)
   {
     printf("%d", a);
     c = a + b;
     a = b;
     b = c;
     count++;
     printf("%c%c", ',', ' ');
   }
printf("%d", a);
printf("\n");
return (0);
}
