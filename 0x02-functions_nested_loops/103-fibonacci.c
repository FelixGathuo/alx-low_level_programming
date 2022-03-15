#include<stdio.h>

/**
* main - Prints sum of even fibonnaci numbers
*
* Return: Always 0.
*/
int main(void)
{
long int a = 1, b = 2, c, sum = 2;
while (a < 4000000)
{
c = a + b;
if (c % 2 == 0)
{
sum += c;
}
a = b;
b = c;
}
printf("%lu\n", sum);
return (0);
}
