#include "main.h"
#include <unistd.h>
/**
* _puts - prints in stdout
* @str: character
*Return: none
*/
void _puts(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		s++;
		len++;
	}
	int l = len - 1;

	while (l !=0)
	{
		_putchar(str[len]);
		l--;
	}
	_putchar('\n');
}
