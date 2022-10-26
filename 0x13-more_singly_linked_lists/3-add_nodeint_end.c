#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a linked list
 * @head: (listint_t **) a pointer to the pointer to the
 *     head of the linked list
 * @n: (int) the number to be added to the new node
 *
 * @brief A function that adds a new node to the end of
 *     a `listint_t` list
 * Return: (listint_t) a pointer to the new node created
 * @file 3-add_nodeint_end.c
 * @author Omotoye Shamsudeen Adekoya
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tail;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	tail = *head;
	while (tail->next)
		tail = tail->next;
	tail->next = new;

	return (new);
}
