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
	if (n >= 0)
	{
		lasD = (n % 10);
		/* below is my code */
		if (lasD == 0)
		{
			printf("Last digit of %d is %d and is 0\n", n, lasD);
		}
		else
		{
			if (lasD > 5)
			{
				printf("Last digit of %d is %d and is greater than 5\n", n, lasD);
			}
			else if (lasD < 6 && lasD > 0)
			{
				printf("Last digit of %d is %d and is less than 6 and 0\n", n, lasD);
			}
		}
	}
	else
	{
		lasD = (-1 * n) % 10;
		printf("Last digit of %d is -%d and is less than 6 and not 0\n", n, lasD);
	}
	return (0);
}
