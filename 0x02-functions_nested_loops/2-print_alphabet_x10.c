#include "main.h"

/**
 * print_alphabet - Print the alphabet 10 times.
 *
 * Return: void.
 */
void print_alphabet_x10(void);
{
int i, a;
a = 0;
while (a < 11)
{
for (i = 97; i < 123; i++)
{
_putchar(i);
}
a++;
}
_putchar('\n');
}
