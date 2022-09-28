#include "main.h"
#include <stdio.h>

/**
*_strchr- Locates a character in a string
*@s:string to search
*@c:character to searc
*
* Return: pointer to dest
*/
char *_strchr(char *s, char c)
{
	unsigned int i;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		i++;
	}
	return ('\0');
}
