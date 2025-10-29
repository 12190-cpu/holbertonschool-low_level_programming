#include "main.h"

/**
 * print_rev - affiche une chaîne de caractères à l'envers, suivie d'un retour à la ligne
 * @s: la chaîne à afficher
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
