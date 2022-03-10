#include <stdio.h>

/**
 * main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
char a;
int b;
long int c;
long long int d;
printf("Size of a char: ", sizeof(a));
printf("Size of an int: ", sizeof(b));
printf("Size of a long int: ", sizeof(c));
printf("Size of a long long int: ", sizeof(d));
return (0);
}
