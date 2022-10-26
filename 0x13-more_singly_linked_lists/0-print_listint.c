#include "lists.h"

/**
 * print_listint - print all elements of a list
 * @h: (const listint_t*) a pointer to the list to be printed
 *
 * @brief A function that prints all the elements of a singly
 *     linked list
 * Return: (size_t) the number of elements in the list
 * @file 0-print_listint.c
 * @author Omotoye Shamsudeen Adekoya
 */
size_t print_listint(const listint_t *h)
{
	size_t node_num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		node_num++;
		h = h->next;
	}
	return (node_num);
}
