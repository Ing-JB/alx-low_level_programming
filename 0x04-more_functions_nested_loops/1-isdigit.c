#include"main.h"
/**
 * _isdigit - check for a digit(0 through 9)
 *@c: ascii code of character to test
 *
 * Return: 1 if c is a digit, otherwis 0
 *
 */
int _isdigit(int c)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i == c)
		{
			return (1);
		}
	}
	return (0);
}
