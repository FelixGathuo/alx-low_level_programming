#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, j, k, l;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)

{
putchar(i + '0');
putchar(j + '0');
putchar(' ');
putchar(i + '0');
putchar(j+1 + '0');
if (i < 8)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
