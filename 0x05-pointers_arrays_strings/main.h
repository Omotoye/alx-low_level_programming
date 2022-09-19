#ifndef MAIN_H
#define MAIN_H

/**
 * reset_to_98 - update variable value to 98
 * @n: (int*) pointer to the integer value to be modified
 *
 * @brief A function that takes in a pointer to an integer value
 *     and updates it to 98.
 * Return: (void)
 * @file 0-reset_to_98.c
 * @author Omotoye Shamsudeen Adekoya
 */
void reset_to_98(int *n);

/**
 * swap_int - swaps two int variable values
 * @a: (int*) pointer to the first int value to be swapped
 * @b: (int*) pointer to the second int value to be swapped
 *
 * @brief A function that takes in a pointers to two int variables
 *     and then swaps the values of the varables.
 * Return: (void)
 * @file 1-swap.c
 * @author Omotoye Shamsudeen Adekoya
 */
void swap_int(int *a, int *b);

/**
 * _strlen - determine the length of a string
 * @s: (char*) pointer to the string to be checked
 *
 * @brief A function that takes in a pointer to a string and
 *     then determines and returns the lenth of the string.
 * Return: (int) the length of the string.
 * @file 2-strlen.c
 * @author Omotoye Shamsudeen Adekoya
 */
int _strlen(char *s);

#endif /* MAIN_H */
