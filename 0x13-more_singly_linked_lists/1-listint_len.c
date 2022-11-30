#include "lists.h"

/**
 * listint_len - returns the number of elemnts
 * in a linked lists
 * @h: head of a list.
 *
 * REturn numbers of nudes
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes - 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
