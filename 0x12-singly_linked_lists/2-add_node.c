#include "lists.h"

/**
 * add_node - adds a new node to the list
 * @head: (list_t **) pointer to a pointer to the head of the list
 * @str: (const char *) string value to be stored in the new node.
 *
 * @brief A function that adds a new node at the beginning of a
 *     list_t list
 * Return: (list_t) the address to the new element, or NULL if it
 *     failed
 * @file 2-add_node.c
 * @author Omotoye Shamsudeen Adekoya
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	/* Getting the length of the string */
	while (str[len] != '\0' && str != NULL)
		len++;

	new->str = malloc(sizeof(char) * (len + 1));
	if (new->str == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;

	return (new);
}
