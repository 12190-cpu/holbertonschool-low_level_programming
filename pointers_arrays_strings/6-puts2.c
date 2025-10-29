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

	while (str[i] != '\0')
	{
	_putchar(str[i]);
	i += 2;
	}

	_putchar('\n');
}
