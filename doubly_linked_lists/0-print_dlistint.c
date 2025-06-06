#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: pointer to the head of the doubly linked list
 *
 * Return: the number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		node_count++;
		h = h->next;
	}

	return (node_count);
}
