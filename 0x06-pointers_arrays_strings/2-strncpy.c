#include "main.h"
/**
*_strncpy - copy string content
*@dest: input value
*@src: input value
*@n: input value
*Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[j] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}