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
	list_t *new;
	list_t *tail;
	unsigned int len = 0;

	if (str == NULL || head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	tail = malloc(sizeof(list_t));
	if (tail == NULL)
		return (NULL);
	tail = *head;

	/* Getting the length of the string */
	while (str[len] != '\0')
		len++;

	new->str = malloc(sizeof(char) * (len + 1));
	if (new->str == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	while (1)
	{
		if (tail != NULL)
		{
			if (tail->next == NULL)
			{
				tail->next = new;
				break;
			}
			tail = tail->next;
		}
		else
		{
			*head = new;
			break;
		}
	}
	return (new);
}
