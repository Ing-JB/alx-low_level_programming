#include "main.h"
#include <stdio.h>
void _puts(char *s);
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
	char r[500];

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

/**
 *_puts - prints out string
 *@s: pointer to string
 *
 * Return: Always 0
 */
void _puts(char *s)
{
	int c;

	c = 0;
	while (s[c] != '\0')
	{
		_putchar(s[c]);
		c++;
	}
	_putchar('\n');
}
