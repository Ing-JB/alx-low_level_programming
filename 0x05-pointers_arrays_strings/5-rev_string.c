#include "main.h"
#include <stdio.h>
/**
 *rev_string - prints string reversed
 *@s:pointer to first character
 *
 * Return: Always 0
 */
void rev_string(char *s)
{
	int len;
	int c;
	char *beg;
	char *end;
	char temp;

	len = _strlen(s);
	beg = s;
	end = s;

	for (c = 0; c < len - 1; c++)
		end++;
	for (c = 0; c < len / 2; c++)
	{
		temp = *end;
		*end = *beg;
		*beg = temp;

		beg++;
		end--;
	}

}

/**
 *_strlen - determines string lenght
 *@s :  pointer to string
 *
 * Return: Always 0
 */
int _strlen(char *s)
{
	int c;

	c = 0;
	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}
