#include "main.h"

/**
 * _strstr - Localise la première occrrence d'une sous-chaîne.
 * @haystack: La chaîne principale o�chercher.
 * @needle: La sous-chaîn a localiser.
 *
 * Return: Pointeur vers le début de la sous-chaîne dans 'haystac
 * NULL si  pas trouv�
 */
char *_strstr(char *haystack, char *needle)
{
	char *h;
	char *n;

	if (*needle == '\0')
	return (haystack);

	while (*haystack)
	{
	h = haystack;
	n = needle;

	while (*h && *n && (*h == *n))
	{
	h++;
	n++;
	}

	if (*n == '\0')
	return (haystack);

	haystack++;
	}

	return (NULL);
}
