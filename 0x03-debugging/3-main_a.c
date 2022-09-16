#include<stdio.h>
#include "main.h"
int convert_day(int month, int day);
void print_remaining_days(int month, int day, int year);
/**
 * main- takes a date and print out how many are left in a year, taking
 * leap years into account
 * Return: always 0
 */

int main(void)
{
	int month;
	int day;
	int year;

	month = 2;
	day = 29;
	year = 2000;

	printf("Date: %02d/%02d/%04d\n", month, day, year);

	day = convert_day(month, day);

	print_remaining_days(month, day, year);

	return (0);
}
