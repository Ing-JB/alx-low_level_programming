#include "main.h"
#include <stdio.h>

/**
*_strspn- Locates a character in a string
*@s:string to search
*@accept:bytes to search
*
* Return: pointer to dest
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int bool;

	i = 0;
	while (*(s + i) != '\0')
	{
		bool = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
		i++;
	}
	return (i);
}
