#ifndef MAIN_H
#define MAIN_H

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
 * _memset - fills memory with a constant byte
 * @s: (char*) pointer to a char buffer
 * @b: (char) the character to filled the buffer with
 * @n: (int) the number of bytes of the memory to be filed
 *
 * @brief A function that fills the first n bytes of the
 *      memory area pointed to by s with the constant byte b
 * Return: (char*) pointer to the memory area of s
 * @file 0-memset.c
 * @author Omotoye Shamsudeen Adekoya
 */
char *_memset(char *s, char b, unsigned int n);

/**
 * _memcpy - copies memory area
 * @dest: (char*) pointer to destination buffer
 * @src: (char*) pointer to the source buffer
 * @n: (int) the number of bytes of the memory to be copied
 *
 * @brief A function that copies n bytes from memory area src
 *     to memory area dest
 * Return: (char*) pointer to the destination buffer
 * @file 0-memcpy.c
 * @author Omotoye Shamsudeen Adekoya
 */
char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _strchr - locates a character in string
 * @s: (char*) pointer to a string
 * @c: (char) character to locate
 *
 * @brief A function that locates and return the pointer to
 *     a character c in the string s.
 * Return: (char*) pointer to the character if found and NULL if
 *     not found
 * @file 2-strchr.c
 * @author Omotoye Shamsudeen Adekoya
 */
char *_strchr(char *s, char c);

/**
 * _strspn - Gets the length of a prefix substring
 * @s: (char*) pointer to a string
 * @accept: (char*) accepted character.
 *
 * @brief A function that returns the number of bytes in the initial
 *     segment of s which consist only of bytes from accept
 * Return: (char*) length of prefix substring
 * @file 3-strspn.c
 * @author Omotoye Shamsudeen Adekoya
 */
unsigned int _strspn(char *s, char *accept);

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: (char*) pointer to a string
 * @accept: (char*) set of accepted character.
 *
 * @brief A function that locates the first occurence in the string s
 *     of any of the bytes in the string accept.
 * Return: (char*) a pointer to the byte in s that matches one of the
 *     bytes in accept, or NULL if no such byte is found
 * @file 4-strpbrk.c
 * @author Omotoye Shamsudeen Adekoya
 */
char *_strpbrk(char *s, char *accept);

/**
 * _strstr - isolates a substring
 * @haystack: (char*) pointer to a string
 * @needle: (char*) pointer to substring
 *
 * @brief A function that finds the first occurrence of the substring
 *     needle in the string haystack.
 * Return: (char*) a pointer to the beginning of the located substring,
 *     or NULL if the substring is not found.
 * @file 5-strstr.c
 * @author Omotoye Shamsudeen Adekoya
 */
char *_strstr(char *haystack, char *needle);

/**
 * print_chessboard - prints the chessboard
 * @a: (char (*)[8]) pointer to a 2d array
 *
 * @brief A function that uses a 2d array to print a chessboard
 * Return: (void))
 * @file 7-print_chessboard.c
 * @author Omotoye Shamsudeen Adekoya
 */
void print_chessboard(char (*a)[8]);

/**
 * print_diagsums - prints sum of the two diagonals of square matrix
 * @a: (char (*)) pointer to a array of square matrix
 * @size: (int) size of the square matrix
 *
 * @brief A function prints the sum of the two diagonals of a square matrix
 *     of integers.
 * Return: (void))
 * @file 8-print_diagsums.c
 * @author Omotoye Shamsudeen Adekoya
 */
void print_diagsums(int *a, int size);

#endif /* MAIN_H */
