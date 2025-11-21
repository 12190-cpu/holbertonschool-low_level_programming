#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - affiche une liste de nombres suivie d'une nouvelle ligne
 * @separator: chaîne à afficher entre les nombres
 * @n: nombre d'entiers passés à la fonction
 *
 * Return: rien
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
    unsigned int i;
    va_list args;

    va_start(args, n);

    for (i = 0; i < n; i++)
    {
        printf("%d", va_arg(args, int));

        if (separator != NULL && i < n - 1)
            printf("%s", separator);
    }

    va_end(args);
}

