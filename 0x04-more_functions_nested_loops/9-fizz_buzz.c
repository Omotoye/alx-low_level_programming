#include "main.h"
#include <stdio.h>

/**
 * main - Entry Point
 * @brief The "Fizz-Buzz test" is an interview question designed to help
 *     filter out the 99.5% of programming job candidates who can’t seem
 *     to program their way out of a wet paper bag.This is program that prints
 *     the numbers from 1 to 100, followed by a new line. But for multiples
 *     of three it prints Fizz instead of the number and for the multiples
 *     of five it prints Buzz. For numbers which are multiples of both
 *     three and five it prints FizzBuzz.
 * Return: (int)
 * @file 9-fizz_buzz.c
 * @author Omotoye Shamsudeen Adekoya
 */

int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}
		if (i != 100)
		{
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}
	}
	return (0);
}
