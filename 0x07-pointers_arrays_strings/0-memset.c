#include "main.h"
#include <stdio.h>

/**
*_memset - Fills memory with a constant byte
*@s:area pointed to by s
*@b:byte to fill area
*@n:number of area to fill
*
* Return: pointer to dest
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
