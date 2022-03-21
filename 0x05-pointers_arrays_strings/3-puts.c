#include "main.h"
#include <unistd.h>
/**
* _puts - prints in stdout
* @str: character
*Return: none
*/
void _puts(char *str)
{
	int l = 0;

	while (*(str + l) != '\0')
	{
		_putchar(str[l]);
		l++;
	}
	_putchar('\n');
}
