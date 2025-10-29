#include "main.h"

/**
 * puts2 - affiche un caractère sur2 d'1 cha�ne� suivi d'un retour ligne
 * @str: la chaînea afficher
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
