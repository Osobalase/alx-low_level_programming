#include "lists.h"

/**
 * get_nodeint_at_index - locates a given node of a linked list
 * @head: head of a list.
 * @index: index of node
 * Return: index of the node. NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0, node < index && head != NULL; node++)
	{
		head = head->next;
	}
	return (head);
}
