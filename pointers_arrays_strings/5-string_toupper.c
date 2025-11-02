#include "main.h"

/**
 * string_toupper - Change toutes les minuscules en majuscules
 * @s: Chaîne de caractèrea modif
 *
 * Return: La chaîne modifiée
 */
char *string_toupper(char *s)
{
	char *p = s;

	while (*p)
	{
	if (*p >= 'a' && *p <= 'z')
	*p = *p - ('a' - 'A');
	p++;
	}
	return (s);
}
