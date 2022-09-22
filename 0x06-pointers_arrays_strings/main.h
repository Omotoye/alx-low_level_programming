#ifndef MAIN_H
#define MAIN_H

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

#endif /* MAIN_H */
