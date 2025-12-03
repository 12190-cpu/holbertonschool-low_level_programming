#include "lists.h"

/**
 * free_dlistint - frees doubly linked list's memory
 * @head: pointer to first node
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
