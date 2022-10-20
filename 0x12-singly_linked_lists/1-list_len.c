#include "lists.h"

/**
 * list_len - returns the lenght of a list
 * @h: (const list_t*) a pointer to the list to be counted
 *
 * @brief A function that returns the number of elements in a linked
 *     list_t list
 * Return: (size_t) the number of elements in the list
 * @file 1-list_len.c
 * @author Omotoye Shamsudeen Adekoya
 */
size_t list_len(const list_t *h)
{
	const list_t *list;
	size_t element_len = 0;

	list = h;
	while (list)
	{
		element_len++;
		list = list->next;
	}

	return (element_len);
}
