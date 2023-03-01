#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

/**
 * _strcat - concatenate string from one buffer to another
 * @dest: (char*) pointer to the destination buffer
 * @src: (char*) pointer to the source buffer.
 *
 * @brief A function that concatenates string from a source buffer to a
 *     destination buffer and returns the pointer to the destination buffer
 * Return: (char*) pointer to the destination buffer.
 * @file 0-strcat.c
 * @author Omotoye Shamsudeen Adekoya
 */
char *_strcat(char *dest, char *src);

/**
 * _strncat - concatenate string from one buffer to another
 * @dest: (char*) pointer to the destination buffer
 * @src: (char*) pointer to the source buffer.
 * @n: (int) number of bytes to be used from the source buffer
 *
 * @brief A function that concatenates string from a source buffer to a
 *     destination buffer, it will use at most n bytes from src and
 *     returns the pointer to the destination buffer
 * Return: (char*) pointer to the destination buffer.
 * @file 1-strncat.c
 * @author Omotoye Shamsudeen Adekoya
 */
char *_strncat(char *dest, char *src, int n);

/**
 * _strncpy - copies string from one buffer to another
 * @dest: (char*) pointer to the destination buffer
 * @src: (char*) pointer to the source buffer.
 * @n: (int) number of bytes to be copied from source
 *
 * @brief A function that copies a string from a source buffer to a
 *     destination buffer and returns the pointer to the destination buffer
 * Return: (char*) pointer to the destination buffer.
 * @file 2-strncpy.c
 * @author Omotoye Shamsudeen Adekoya
 */
char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp - compares two strings
 * @s1: (char*) pointer to the first string
 * @s2: (char*) pointer to the second string
 *
 * @brief A function that compares two string without taking
 *     into consideration the location of the characters of the string
 * Return: (int) 0 if equal, +ve if s1 > s2, -ve if s1 < s2
 * @file 3-strcmp.c
 * @author Omotoye Shamsudeen Adekoya
 */

int _strcmp(char *s1, char *s2);

/**
 * reverse_array - reverses the content of an array
 * @a: (int*) array of integer
 * @n: (int) the number of elements in the array
 *
 * @brief A function that reverses the content of an array of integers
 * Return: (void)
 * @file 4-rev_array.c
 * @author Omotoye Shamsudeen Adekoya
 */

void reverse_array(int *a, int n);

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @str: (char*) string to convert to all uppercase
 *
 * @brief A function that converts all lowercase characters contained
 *     in a string into uppercase.
 * Return: (char*) the given string after uppercase conversion
 * @file 5-string_toupper.c
 * @author Omotoye Shamsudeen Adekoya
 */

char *string_toupper(char *str);

/**
 * cap_string - capitalize the words of a string
 * @str: (char*) string to be converted
 *
 * @brief A function that converts the first letters of every word in a
 *     string into uppercase
 * Return: (char*) the given string after capitalization
 * @file 6-cap_string.c
 * @author Omotoye Shamsudeen Adekoya
 */

char *cap_string(char *str);
#endif /* MAIN_H */
