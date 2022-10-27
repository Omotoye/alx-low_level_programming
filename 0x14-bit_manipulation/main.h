#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _putchar - puts character in stdout
 * @c: (char) the character to be printed
 *
 * @brief A function to put a character into the standard
 *     output file.
 * Return: (void)
 * @file _putchar.c
 * @author Omotoye Shamsudeen Adekoya
 */
void _putchar(char c);

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
void print_binary(unsigned long int n);

#endif /* MAIN_H*/
