#include<stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
int i;
i = 97;
while (i < 123)
{
if (!((i == 100 || i == 112)))
{
putchar(i);
}
i++;
}
putchar('\n');
return (0);
}
