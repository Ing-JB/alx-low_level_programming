#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *positive_or_negative - print the sign of a random integer
 *@i: integer to test
 *
 * Return: Always 0 (Success)
 */
void positive_or_negative(int n)
{
	/* below is my code */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}

}
