#include "lists.h"

/**
 * get_dnodeint_at_index - gets the node to an index
 * @head: pointer to the first node
 * @index: position of the node
 *
 * Return: address of the node or NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
