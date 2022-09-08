#include <stdio.h>

/**
 * main - Entry point
 * Description: a program that prints the size of various types on the
 *     computer it is compiled and run on
 * Return: Always 0 (Success)
 * Author: Omotoye Shamsudeen Adekoya
 */

int main(void)
{
	char char_type;
	int int_type;
	long int long_int_type;
	long long int long_long_int_type;
	float float_type;

	printf("Size of a char: %zu byte(s)\n", sizeof(char_type));
	printf("Size of an int: %zu byte(s)\n", sizeof(int_type));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long_int_type));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long_long_int_type));
	printf("Size of a float: %zu byte(s)\n", sizeof(float_type));
	return (0);
}
