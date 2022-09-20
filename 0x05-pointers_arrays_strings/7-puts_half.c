#include "main.h"
#include <stdio.h>
int _strlen(char *s);
/**
 *puts_half - prints halft a string
 *@str: pointer to first character in string
 *
 * Return: Always 0
 */
void puts_half(char *str)
{
	int len;

	len = _strlen(str);

	if (len % 2 == 0)
	{
		int i;

		for (i = len / 2; i < len; i++)
			_putchar(str[i]);
	}
	else
	{
		int n;
		int j;

		n = (len - 1) / 2;

		for (j = n + 1; j < len; j++)
			_putchar(str[j]);
	}
}
/**
 * _strlen - string length
 * @s: pointer to string
 *
 * Return: returns string lenght
 */
int _strlen(char *s)
{
	int c;

	c = 0;

	while (*(s + c) != '\0')
		c++;
	return (c);
}
