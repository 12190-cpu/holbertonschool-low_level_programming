#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the first node
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
    size_t count = 0;
    unsigned int i;

    while (h)
    {
        if (h->str == NULL)
        {
            _putchar('[');
            _putchar('0');
            _putchar(']');
            _putchar(' ');
            _putchar('(');
            _putchar('n');
            _putchar('i');
            _putchar('l');
            _putchar(')');
            _putchar('\n');
        }
        else
        {
            _putchar('[');
            /* afficher len (nombre) sans printf */
            i = h->len;
            if (i >= 10)
                _putchar((i / 10) + '0');
            _putchar((i % 10) + '0');
            _putchar(']');
            _putchar(' ');
            for (i = 0; h->str[i]; i++)
                _putchar(h->str[i]);
            _putchar('\n');
        }
        count++;
        h = h->next;
    }

    return (count);
}
