#include "main.h"
#include <stdio.h>

/**
 *_puts2 - prints a every other character
 *@str: pointer to first character in string
 *
 * Return: Always 0
 */
void  _puts2(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
	{
		if (c % 2 == 0)
			_putchar(str[c]);
		else
			continue;
	}
	_putchar('\n');

}
