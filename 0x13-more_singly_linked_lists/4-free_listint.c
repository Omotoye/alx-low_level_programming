#include "lists.h"

/**
 * free_listint - frees a `listint_t` list
 * @head: (listint_t *) a pointer to the `listint_t` list
 *
 * @brief A function that frees up the memory alloated for a
 *     `listint_t` list
 * Return: (void)
 * @file 4-free_listint.c
 * @author Omotoye Shamsudeen Adekoya
 */
void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		free(head);
	}
}
