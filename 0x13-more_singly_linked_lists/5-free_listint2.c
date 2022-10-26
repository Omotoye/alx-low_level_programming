#include "lists.h"

/**
 * free_listint2 - frees a `listint_t` list
 * @head: (listint_t **) a pointer to a pointer to the
 *      `listint_t` list
 *
 * @brief A function that frees up the memory alloated for a
 *     `listint_t` list and sets head to NULL
 * Return: (void)
 * @file 5-free_listint2.c
 * @author Omotoye Shamsudeen Adekoya
 */
void free_listint2(listint_t **head)
{
	if (*head)
	{
		free_listint2(&((*head)->next));
		free(*head);
	}
	else
	{
		head = NULL;
	}
}
