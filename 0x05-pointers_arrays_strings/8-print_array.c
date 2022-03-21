#include "main.h"
#include <stdio.h>
/**
*print_array - prints elements of array
*@a: array
*@n: number of elements
**/
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		_putchar(*(a+b));
		if (b != n - 1)
		{
			printf(", ");
		}
	}
	_putchar('\n');
}
