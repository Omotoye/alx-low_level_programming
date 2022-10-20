#include "lists.h"

/**
 * print_list - print all elements of a list
 * @h: (const list_t*) a pointer to the list to be printed
 *
 * @brief A function that prints all the elements of a singly
 *     linked list
 * Return: (size_t) the number of elements in the list
 * @file 0-print_list.c
 * @author Omotoye Shamsudeen Adekoya
 */
size_t print_list(const list_t *h)
{
	const list_t *list;
	size_t element_len = 0;

	list = h;
	while (list)
	{
		if (list->str)
			printf("[%d] %s\n", list->len, list->str);
		else
			printf("[0] (nil)\n");
		element_len++;
		list = list->next;
	}

	return (element_len);
}
