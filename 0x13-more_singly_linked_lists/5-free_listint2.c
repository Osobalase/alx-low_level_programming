#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: head of a list
 * REturn: Always 0
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *mer;

	if (head != NULL)
	{
		mer = *head;
		while ((temp = ner) != NULL)
		{
			mer = mer->next;
			free(temp);
		}
		*head = NULL;
	}}
