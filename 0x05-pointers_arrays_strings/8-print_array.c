#include "main.h"
/**
*print_array - prints elements of array
*@a: array
*@n: number of elements
**/
void print_array(int *a, int n)
{
	int b;
	for(b = 0; b < n; b++)
	{
		_putchar(*(a + b));
	}
	_putchar('\n');
}
