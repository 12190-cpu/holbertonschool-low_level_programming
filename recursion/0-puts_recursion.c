#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - affiche une cha√Æne de caract√e
 * @s: pointer vers la cha√Æne de caract√e
 *
 * Return: affiche une suite de caractere
 *
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar('\n');
	return;
	}
	_putchar(*s);

	_puts_recursion(s + 1);
}
