#include "main.h"

/**
 * puts2 - affiche un caractÃ¨re sur2 d'1 chaÃne® suivi d'un retour ligne
 * @str: la chaÃ®nea afficher
 *
 * Retour: rien (void)
 */
void puts2(char *str)
{
	int i = 0;

	if (!str)
	return;

	while (str[i] != '\0')
	{
	_putchar(str[i]);
	i += 2;

	if (str[i] == '\0')
	break;
	}

	_putchar('\n');
}
