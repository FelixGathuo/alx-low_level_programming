#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, a;
i = 10;
while (i < 10)
{
a = (int) i;
putchar(i + '0');
i++;
}
putchar('\n');
return (0);
}
