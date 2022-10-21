#include "lists.h"

/**
 * free_list - frees the memory allocated for list
 * @head: (list_t*) a pointer to the list to be deleted
 *
 * @brief A function that frees the memory allocated for
 *     a list.
 * Return: (void)
 * @file 4-free_list.c
 * @author Omotoye Shamsudeen Adekoya
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		free_list(head->next);
		free(head->str);
		free(head);
	}
}
