#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - sums all parameters
 * @n: (const unsigned int) the count of optional parameter
 *     to be added
 * @...: (const unsigned int) optional parameters
 *
 * @brief A function that takes in a variable amount of
 *     parameters, sums them all and returns the sum
 * Return: (int) sum of all integer parameters
 * @file 0-sum_them_all.c
 * @author Omotoye Shamsudeen Adekoya
 */
int sum_them_all(const unsigned int n, ...);

#endif /* MAIN_H */
