#include "main.h"
#include <stdio.h>

/**
*_strncat - copies n bytes of src into dest
*@src:pointer to source
*@dest:pointer to destination
*@n:number of bytes of src to concatenate
*
* Return: pointer to dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int c;
	int d;

	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}

	for (d = 0; d < n && src[d] != '\0'; d++)
	{
		dest[c + d] = src[d];
		d++;
		c++;
	}
	dest[c + d] = '\0';
	return (dest);
}
