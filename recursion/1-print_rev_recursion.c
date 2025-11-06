#include "main.h"

/**
 * _print_rev_recursion - Affiche une chaîne de caractèrea l'envers.
 * @s: Pointeur vers la chaîn a affiche
 *
 * Description: Utilise la récursion pour parcurir la chaîne jusq'a
 * la fin
 */
void _print_rev_recursion(char *s)
{
    if (*s == '\0')
        return;

    _print_rev_recursion(s + 1);
    _putchar(*s);
}
