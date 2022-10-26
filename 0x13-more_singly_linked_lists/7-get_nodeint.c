#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at the given index
 * @head: (const listint_t*) a pointer to the list to be searched
 * @index: (unsigned int) the index of the node to be returned
 *
 * @brief A function that returns the nth node of the `listint_t`
 *     linked list
 * Return: (listint_t *) returns the nth node of the `listint_t`
 *     linked list or NULL if the node does not exist
 * @file 7-get_nodeint.c
 * @author Omotoye Shamsudeen Adekoya
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node_num = 0;
	listint_t *next;

	next = head;

	while (next)
	{
		if (node_num == index)
			return (next);
		node_num++;
		next = next->next;
	}
	return (NULL);
}
