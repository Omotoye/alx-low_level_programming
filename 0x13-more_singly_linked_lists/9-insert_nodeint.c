#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node at the given index
 * @head: (listint_t **) a pointer to the pointer to the
 *     head of the linked list
 * @idx: (unsigned int) the index to insert the new node
 * @n: (int) the number to be added to the new node
 *
 * @brief A function that insert a new node at a given position
 * Return: (listint_t) a pointer to the new node created
 * @file 9-insert_nodeint.c
 * @author Omotoye Shamsudeen Adekoya
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *next, *previous;
	unsigned int node_num = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0 && *head == NULL)
	{
		*head = new;
		return (new);
	}

	next = *head;
	while (next)
	{
		if (node_num == idx)
		{
			new->next = next;
			next = new;
			if (previous)
				previous->next = new;
			return (new);
		}
		if (next->next == NULL && idx > node_num + 1)
		{
			new->next = NULL;
			next->next = new;
			return (new);
		}
		previous = next;
		next = next->next;
		node_num++;
	}
	return (NULL);
}
