#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _putchar - puts character in stdout
 * @c: (char) the character to be printed
 *
 * @brief A function to put a character into the standard
 *     output file.
 * Return: (void)
 * @file _putchar.c
 * @author Omotoye Shamsudeen Adekoya
 */
void _putchar(char c);

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

/**
 * print_listint - print all elements of a list
 * @h: (const listint_t*) a pointer to the list to be printed
 *
 * @brief A function that prints all the elements of a singly
 *     linked list
 * Return: (size_t) the number of elements in the list
 * @file 0-print_listint.c
 * @author Omotoye Shamsudeen Adekoya
 */
size_t print_listint(const listint_t *h);

/**
 * listint_len - returns the length of a linked list
 * @h: (const listint_t*) a pointer to the list to be counted
 *
 * @brief A function that returns the number of nodes in a linked
 *     list
 * Return: (size_t) the number of elements in the list
 * @file 1-listint_len.c
 * @author Omotoye Shamsudeen Adekoya
 */
size_t listint_len(const listint_t *h);

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
listint_t *add_nodeint(listint_t **head, const int n);

/**
 * add_nodeint_end - adds a node to the end of a linked list
 * @head: (listint_t **) a pointer to the pointer to the
 *     head of the linked list
 * @n: (int) the number to be added to the new node
 *
 * @brief A function that adds a new node to the end of
 *     a `listint_t` list
 * Return: (listint_t) a pointer to the new node created
 * @file 3-add_nodeint_end.c
 * @author Omotoye Shamsudeen Adekoya
 */
listint_t *add_nodeint_end(listint_t **head, const int n);

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
void free_listint(listint_t *head);

#endif /* LISTS_H */
