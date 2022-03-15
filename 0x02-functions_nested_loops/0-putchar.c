#include "main.h"
/**
 * main - writes _putchar to standard output
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
int i;
char a[] = "_putchar";

for (i = 0; i < 8; i++)
{
_putchar(a[i]);
}
_putchar('\n');
return (0);
}
