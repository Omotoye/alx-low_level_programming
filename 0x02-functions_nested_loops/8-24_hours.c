#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - print every minute of the day
 * @brief A function that prints every minute of the
 *     day of Jack Bauer, starting from 00:00 to 23:59
 * Return: (void)
 * @file 8-24_hours.c
 * @author Omotoye Shamsudeen Adekoya
 */
void jack_bauer(void)
{
	int i;
	int j;
	int hour_first_digit;
	int minute_first_digit;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			hour_first_digit = i / 10;
			minute_first_digit = j / 10;
			putchar(hour_first_digit + '0');
			putchar((i % 10) + '0');
			putchar(':');
			putchar(minute_first_digit + '0');
			putchar((j % 10) + '0');
			putchar('\n');
		}
	}
}
