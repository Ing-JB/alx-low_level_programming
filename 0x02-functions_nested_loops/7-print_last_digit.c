#include"main.h"

/**
 * print_last_digit - print the last digit of a nmber
 *@n: integer to print last digit of
 *
 * Return: returns the last digit
 */
int print_last_digit(int n)
{
	int lastDig;

	if (n >= 0)
	{
		lastDig = (n % 10);
		return (lastDig);
	}
	else
	{
		lastDig = (-1 * n) % 10;
		return (lastDig);
	}
}
