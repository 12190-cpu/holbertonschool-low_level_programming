#include "main.h"

/**
 * _strcmp - Compare deux chaînes de caractères
 * @s1: Première chaîne
 * @s2: Deuxième chaîne
 *
 * Return: <0 si s1<s2, 0 si s1=s2, >0 si s1>s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
