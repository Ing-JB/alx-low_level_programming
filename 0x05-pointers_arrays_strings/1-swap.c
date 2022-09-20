#include "main.h"
#include <stdio.h>

/**
 *swap_int - swaps the values of two integers
 *@a: pointer to first integer
 *@b: pointer to second integer
 *
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
