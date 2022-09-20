#include "main.h"
#include <stdio.h>

/**
 *_strlen - determines the length of a string
 *@s: pointer to first character in string
 *
 * Return: returns string length
 */
int  _strlen(char *s)
{
	int c;

	c = 0;
	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}
