#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *temp = *head;
    unsigned int i = 0;

    if (!head || !*head)
        return (-1);

    if (index == 0)
    {
        *head = temp->next;
        if (temp->next)
            temp->next->prev = NULL;
        free(temp);
        return (1);
    }

    while (temp != NULL && i < index)
    {
        temp = temp->next;
        i++;
    }

    if (temp == NULL)
        return (-1);

    if (temp->next)
        temp->next->prev = temp->prev;

    if (temp->prev)
        temp->prev->next = temp->next;

    free(temp);
    return (1);
}

