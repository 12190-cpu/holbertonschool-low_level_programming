#include "main.h"

/**
 * puts_half - affiche la deuxième oitié d'une chaî
 * @str: la chaînea  afficher
 *
 * Retour: rien (void)
 */
void puts_half(char *str)
{
	int len = 0, i;

	while (str[len] != '\0')
		len++;

	i = (len + 1) / 2;

	while (i < len)
	{
		_putchar(str[i]);
		i++;
	}

	_putchar('\n');
}
