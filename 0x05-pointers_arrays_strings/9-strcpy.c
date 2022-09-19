#include "main.h"
#include <stdio.h>

/**
 * print_array - print array of integer
 * @a: (int*) pointer to the first item of the array of integer
 * @n: (int) size of the given array of integer.
 *
 * @brief A function that the items of an array of integer.
 * Return: (void)
 * @file 8-print_array.c
 * @author Omotoye Shamsudeen Adekoya
 */
char *_strcpy(char *dest, char *src)
{
    char * _dest = dest;
    while (1)
    {
        *_dest = *src;
        if (*src == '\0')
            break;
        src++;
        _dest++;
    }
    return dest;
}

int main(void)
{
    char s1[98];
    char *ptr;

    ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
    printf("%s", s1);
    printf("%s", ptr);
    return (0);
}