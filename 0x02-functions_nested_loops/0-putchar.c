#include <stdio.h>
#include "main.h"
/**
 *
 * main - _putchar - writes the character c to stdout
 *Return: Always 0 (Success)
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
