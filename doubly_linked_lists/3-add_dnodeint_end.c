#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a node at the end of a list
 * @head: pointer to the first node
 * @n: int to insert
 *
 * Return: new node or NULL if fail
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *temp;

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		newNode->prev = NULL;
		*head = newNode;
		return (newNode);
	}

	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	temp->next = newNode;
	newNode->prev = temp;

	return (newNode);
}
