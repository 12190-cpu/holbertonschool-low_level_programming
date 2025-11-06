#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - affiche une chaîne de caractèr
 * @s: pointer vers la chaîne de caractèr
 *
 * Description: Affiche chaque caractère de la chaîeun par un
 * en appelant récursivement la fonction jusq'atteindre le
 * caractère de fin '\0
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	putchar('\n');
	return;
	}

	putchar(*s);
	_puts_recursion(s + 1);
}
