#include "main.h"

/**
 * print_binary - prints the binary of a number
 * @n: (unsigned long int) the decimal number to be converted to
 *     bianry
 *
 * @brief A function that takes in a decimal number and prints
 *     the binary representation of that number
 * Return: (void)
 * @file 1-print_binary.c
 * @author Omotoye Shamsudeen Adekoya
 */
void print_binary(unsigned long int n)
{
    if (n && n >> 1)
    {
        print_binary(n >> 1);
        _putchar((n & 1) + '0');
    }
}
