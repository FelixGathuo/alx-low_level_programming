#include "main.h"
/**
 * print_sign - prints sign of a number
 *@c: The character in ASCII code
 * Return: Always 0
 */
int print_sign(int n)
{
if (n >= 1)
{
return (1);
_putchar('+');
}
else if (n == 0)
{
return (0);
_putchar('0');
}
else
{
return (-1);
_putchar('-');
}
_putchar('\n');
}
