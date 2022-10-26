#include "lists.h"

/**
 * pop_listint - pops the first item of a list
 * @head: (listint_t **) a pointer to a pointer to the
 *      `listint_t` list
 *
 * @brief A function that deletes the head node of a `listint_t`
 *     linked list, and returns the head node's data (n)
 * Return: (int) the head node data, 0 if the linked list is
 *     empty
 * @file 6-pop_listint.c
 * @author Omotoye Shamsudeen Adekoya
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data = 0;

	if (*head)
	{
		temp = (*head)->next;
		data = (*head)->n;
		free(*head);
		*head = temp;
	}
	return (data);
}
