#include "lists.h"

/**
 * add_nodeint - adds a node to a linked list
 * @head: (listint_t **) a pointer to the pointer to the
 *     head of the linked list
 * @n: (int) the number to be added to the new node
 *
 * @brief A function that adds a new node to the beginning of
 *     a `listint_t` list
 * Return: (listint_t) a pointer to the new node created
 * @file 2-add_nodeint.c
 * @author Omotoye Shamsudeen Adekoya
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
