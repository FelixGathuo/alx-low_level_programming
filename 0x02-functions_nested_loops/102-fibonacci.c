#include<stdio.h>

/**
* main - Prints first 50 fibonnaci numbers
*
* Return: Always 0.
*/
int main()
{
    int a = 1, b = 2, c, count = 0;
   while (count < 50)
   {
     printf("%d%c\n", a, ',');
     c = a + b;
     a = b;
     b = c;
     count++
   }
return (0);
}
