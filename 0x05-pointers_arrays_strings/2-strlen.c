#include "main.h"
/**
* _strlen - returns len of string
* @s: character
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}
