#include "lists.h"

/**
 * sum_dlistint - adds the sum of all the node
 * @head: pointer to the first node
 *
 * Return: sum of the values or 0 if empty list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

