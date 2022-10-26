#include "lists.h"

/**
 * listint_len - returns the length of a linked list
 * @h: (const listint_t*) a pointer to the list to be counted
 *
 * @brief A function that returns the number of nodes in a linked
 *     list
 * Return: (size_t) the number of elements in the list
 * @file 1-listint_len.c
 * @author Omotoye Shamsudeen Adekoya
 */
size_t listint_len(const listint_t *h)
{
	size_t node_num = 0;

	while (h)
	{
		node_num++;
		h = h->next;
	}
	return (node_num);
}
