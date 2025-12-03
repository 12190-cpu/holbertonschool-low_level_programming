#include "lists.h"

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *newNode, *temp = *h;
    unsigned int i = 0;

    if (idx == 0)
        return (add_dnodeint(h, n));

    newNode = malloc(sizeof(dlistint_t));
    if (!newNode)
        return (NULL);

    while (temp != NULL && i < idx - 1)
    {
        temp = temp->next;
        i++;
    }

    if (temp == NULL)
    {
        free(newNode);
        return (NULL);
    }

    newNode->n = n;
    newNode->next = temp->next;
    newNode->prev = temp;

    if (temp->next)
        temp->next->prev = newNode;

    temp->next = newNode;

    return (newNode);
}

