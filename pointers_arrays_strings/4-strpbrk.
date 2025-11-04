#include "main.h"

/**
 * _strpbrk - recherche 1 oct ds 1  chaine de caracteres
 * @s: chaine a checker
 * @accept: 2eme chaine a checker
 *
 * Return: resultat trouve
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; accept[j] != '\0'; j++)
	{
	if (s[i] == accept[j])
	return (&s[i]);
	}
	}
	return (NULL);
}
