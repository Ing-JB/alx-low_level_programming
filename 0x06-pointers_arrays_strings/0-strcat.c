#include "main.h"
#include <stdio.h>

/**
*_strcat - copies a strin into another
*@src:pointer to source
*@dest:pointer to destination
*
* Return: pointer to dest
*/
char *_strcat(char *dest, char *src)
{
	int c;
	int d;

	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	d = 0;
	while (src[d] != '\0')
	{
		dest[c] = src[d];
		d++;
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
