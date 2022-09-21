#include "main.h"
#include <stdio.h>

/**
*_strncpy - copies n bytes of src into dest
*@src:pointer to source
*@dest:pointer to destination
*@n:number of bytes of src to concatenate
*
* Return: pointer to dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int c;

	c = 0;
	while (src[c] != '\0')
	{
		dest[c] = src[c];
		c++;
	}

	for ( ; c < n; c++)
	dest[c] = '\0';
	return (dest);
}
