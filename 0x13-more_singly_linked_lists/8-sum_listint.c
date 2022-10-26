#include "lists.h"

/**
 * sum_listint - sums up the data in a linked list
 * @head: (const listint_t*) a pointer to the list to be summed
 *
 * @brief A function that returns the sum of all the data (n) of
 *     a `listint_t` linked list
 * Return: (int) the sum of all the data (n)of a `listint_t`
 *     linked list
 * @file 8-sum_listint.c
 * @author Omotoye Shamsudeen Adekoya
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *next;

	next = head;
	while (next)
	{
		sum = sum + next->n;
		next = next->next;
	}
	return (sum);
}
