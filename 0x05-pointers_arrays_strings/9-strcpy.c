#include "main.h"
#include <stdio.h>

/**
*_strcpy - copies a strin into another
*@src:pointer to source
*@dest:pointer to destination
*
* Return: pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
