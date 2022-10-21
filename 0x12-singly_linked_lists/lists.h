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
 * print_list - print all elements of a list
 * @h: (const list_t*) a pointer to the list to be printed
 *
 * @brief A function that prints all the elements of a singly
 *     linked list
 * Return: (size_t) the number of elements in the list
 * @file 0-print_list.c
 * @author Omotoye Shamsudeen Adekoya
 */
size_t print_list(const list_t *h);

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
size_t list_len(const list_t *h);

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
list_t *add_node(list_t **head, const char *str);

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
list_t *add_node_end(list_t **head, const char *str);

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
void free_list(list_t *head);

#endif /* LISTS_H */
