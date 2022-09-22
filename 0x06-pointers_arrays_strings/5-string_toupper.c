#include "main.h"
#include <stdio.h>

/**
*string_toupper - changes cases to upper
*@s:pointer to string
*
* Return:pointer to uppercase string
*/
char *string_toupper(char *s)
{
	int c;

	c = 0;
	while (s[c] != '\0')
	{
		if (s[c] >= 'a' && s[c] <= 'z')
		{
			s[c] = s[c] - 32;
		}
		c++;
	}
	return (s);
}
