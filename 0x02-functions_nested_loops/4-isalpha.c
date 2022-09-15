#include"main.h"
/**
 * _isalpha - print lower/upper case alphas
 *@c: ascii code of character to test
 *
 * Return: 1 if it matches, otherwis 0
 *
 */
int _isalpha(int c)
{
	int i;

	for (i = 65; i <= 123; i++)
	{	
		if ( i == c)
		{

			if (i == 91)
				_putchar(32);
			else if (i == 92)
				_putchar(32);
	       		else if (i == 93)
				_putchar(32);
			else if (i == 94)
				_putchar(32);
			else if (i == 95)
				_putchar(32);
			else if (i == 96)
				_putchar(32);
			else
				return (1);
		} 	
	}
	return (0);
}
