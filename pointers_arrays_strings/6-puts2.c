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

	while (str[i] != '\0')
	{
	_putchar(str[i]);
	i += 2;
	}

	_putchar('\n');
}
