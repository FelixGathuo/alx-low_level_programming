#include "main.h"
/**
*reverse_array - reverse array
*@a: input integer
*@n: integer
*Return: 0
*/
void reverse_array(int *a, int n)
{
	int rev_arr;
	int j;

	for (j = 0; j < n--; j++)
	{
		rev_arr = a[j];
		a[j] = a[n];
		a[n] = rev_arr;
	}
}
