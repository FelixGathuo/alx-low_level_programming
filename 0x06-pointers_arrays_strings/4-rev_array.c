#include "main.h"
/**
*reverse_array - reverse array
*@a: input integer
*@n: integer
*Return: 0
*/
void reverse_array(int *a, int n)
{
	int rev_arr[n];
	int j;
	n = n-1;
	j = 0;

	for (; n >= 0; n--)
	{
		rev_arr[j] = a[n];
		j++;
	}
	return (rev_arr)
}
