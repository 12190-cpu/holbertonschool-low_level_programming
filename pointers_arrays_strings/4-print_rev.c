#include "main.h"

/**
 * print_rev - aff une chaîne dec har a l'envers suivie dun retour a la ligne
 * @s: la chaîe a afficher
 *
 * Retour: rien (void)
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	while (i > 0)
	{
		_putchar(s[i - 1]);
		i--;
	}

	_putchar('\n');
}
