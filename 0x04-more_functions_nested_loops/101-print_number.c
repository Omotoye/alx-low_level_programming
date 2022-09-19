#include "main.h"
#include <stdio.h>

/**
 * print_triangle - print square
 * @size: (int) the size of the square
 *
 * @brief A function that prints a square on the
 *     terminal based on the size given.
 * Return: (void)
 * @file 8-print_square.c
 * @author Omotoye Shamsudeen Adekoya
 */

int get_digit_count(int num);
void print_number(int n)
{
    int multiplier = 10^(get_digit_count(n));
    printf("%d\n", get_digit_count(n));
    printf("%d\n", multiplier);
    int digit;
    while (multiplier >= 10)
    {
        digit = (n / multiplier) % 10;
        // putchar(digit);
        multiplier /= 10;
    }
}

int get_digit_count(int num)
{
    int digit_count = 1;
    if (num < 0)
        num = num * (-1);
    while (num >= 10)
    {
        num = num / 10;
        digit_count++;
    }
    return digit_count;
}

int main()
{
    print_number(98);
    putchar('\n');
    print_number(402);
    putchar('\n');
    print_number(1024);
    putchar('\n');
    print_number(0);
    putchar('\n');
    print_number(-98);
    putchar('\n');
    return (0);
}
