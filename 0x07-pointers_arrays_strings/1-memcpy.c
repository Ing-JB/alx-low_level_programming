#include "main.h"
#include <stdio.h>

/**
*_memscpy- Fills memory with a constant byte
*@desc:area to copy to
*@src:area to copy from
*@n:bytes to copy
*
* Return: pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
