#include "lists.h"

/**
 * add_node_end - adds a new node to the end of list
 * @head: (list_t **) pointer to a pointer to the head of the list
 * @str: (const char *) string value to be stored in the new node.
 *
 * @brief A function that adds a new node at the end of a
 *     list_t list
 * Return: (list_t) the address to the new element, or NULL if it
 *     failed
 * @file 3-add_node_end.c
 * @author Omotoye Shamsudeen Adekoya
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tail;
	unsigned int len = 0;

	new = malloc(sizeof(list_t));
	tail = malloc(sizeof(list_t));
	if (new == NULL || tail == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	new->str = malloc(sizeof(char) * (len + 1));
	if (new->str == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
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
