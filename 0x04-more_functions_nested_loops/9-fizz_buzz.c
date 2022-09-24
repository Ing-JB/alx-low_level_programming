#include <stdio.h>
#include"main.h"
/**
 * main - prints digits 1 to 100
 *
 * Return: 0 Always
 *
 */
int main(void)
{
	int i;

	for (i = 1; i < 101 ; i++)
	{
		if ((i % 3) == 0 && (i % 5) != 0)
		{
			printf("Fizz ");
		}
		else if ((i % 5) == 0 && (i % 3) != 0)
		{
			printf("Buzz ");
		}
		else if ((i % 15) == 0)
		{
			printf("FizzBuzz ");
		}
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
