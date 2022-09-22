#include "main.h"
#include <stdio.h>

/**
*leet -encodes a string to 1337
*@s:pointer to string
*
* Return:pointer to uppercase string
*/
char *leet(char *s)
{
	int c;
	char Fnd[10] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};
	char Leet[5] = {'4', '3', '0', '7', '1'};

	c = 0;
	while (s[c] != '\n')
	{
		int j;

		for (j = 0; j < 10; j++)
		{
			if ((s[c] == Fnd[j]) || (s[c] == Fnd[j + 5]))
			{
				s[c] = Leet[j];
			}
		}
		c++;
	}
	return (s);
}
