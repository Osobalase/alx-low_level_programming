#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elemnts
 * in a linked lists
 * @h: head of a list.
 *
 * Return: numbers of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes - 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
