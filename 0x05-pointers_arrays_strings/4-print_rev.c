#include "main.h"
#include <stdio.h>

/**
 *print_rev - prints string reversed
 *@s:pointer to first character
 *
 * Return: Always 0
 */
void print_rev(char *s)
{
	int beg;
	int end;
	int c;
	char r[100];

	c = 0;
	while (s[c] != '\0')
	{
		c++;
	}
	end = c - 1;


	for (beg = 0; beg < c; beg++)
	{
		r[beg] = s[end];
		end--;
	}

	r[c] = '\0';
	_puts(r);

}
