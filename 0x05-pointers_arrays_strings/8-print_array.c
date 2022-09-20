#include "main.h"
#include <stdio.h>

/**
*print_array - prints an array
*@a:pointer to first character
*@n:length of charactes to print
*
* Return: Always 0
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i < (n - 1))
			printf(", ");
	}
	printf("\n");
}
