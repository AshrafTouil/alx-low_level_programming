#include "lists.h"

/**
 * print_dlistint - prints doubly-linked list
 * @h: address of head nodes
 *
 * Return: size of list
 */
size_t print_dlislint(const dlislint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
