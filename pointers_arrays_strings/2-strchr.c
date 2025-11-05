#include "main.h"

/**
 * _strchr - localise un caractere dans une chaine
 * @s: la chaine a checker
 * @c: le caractere a localiser
 *
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
	if (*s == c)
	return (s);
	s++;
}

	if (c == '\0')
	return (s);
	return (NULL);
}
