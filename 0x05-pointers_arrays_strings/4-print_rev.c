#include "main.h"
#include <unistd.h>
/**
* _puts - prints in stdout
* @str: character
*Return: none
*/
void _puts(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
	{
	}
	for (len = len - 1; len >= 0; len--)
	{
		_putchar(str[len]);
	}
	_putchar('\n');
}
