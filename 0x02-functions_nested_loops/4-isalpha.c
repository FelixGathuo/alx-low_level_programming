#include "main.h"
/**
 * _isalpha - returns 1 if char is lowercase or uppercase and 0 otherwise
 *@c: The character in ASCII code
 * Return: Always 0
 */
int _isalpha(int c)
{
if (c >= 65 && c <= 122)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
