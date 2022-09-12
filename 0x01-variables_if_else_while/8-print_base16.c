#include<stdio.h>
/**
 * main - prints lowercase alphas
 *
 * Return: lower case alphabets (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		if (i <= 9)
		{
			putchar(i + 48);
		}
		else
		{
			putchar(i + 87);
		}
	}
	putchar(10);
	return (0);
}
