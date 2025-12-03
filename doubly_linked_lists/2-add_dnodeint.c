#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a node in the begining of the lisr
 * @head: pointer to the first node
 * @n: int to insert
 *
 * Return: new node or NULL if fail
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;

	if (*head != NULL)
		(*head)->prev = newNode;

	*head = newNode;

	return (newNode);
}
