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

#endif /* MAIN_H */
