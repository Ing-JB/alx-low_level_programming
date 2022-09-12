#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print the sign of a random integer
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, lasD;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lasD = (n % 5);
	/* below is my code */
	if (lasD == 0)
	{
		printf("Last digit of %d is %d and is zero.\n", n, lasD);
	}
	else
	{
		if (lasD > 5)
		{
			printf("Last digit of %d is %d and is greater than 5.\n", n, lasD);
		}
		else if (lasD < 6 && lasD > 0)
		{
			printf("Last digit of %d is %d and is less than 6 and not zero.\n", n, lasD);
		}
	}
	return (0);
}
