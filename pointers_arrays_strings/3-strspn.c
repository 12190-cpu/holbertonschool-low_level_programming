#include "main.h"

/**
 * _strspn - compte nbre d'octets au debut d'une chaine
 * @s: chaine a verifier
 * @accept: chaine
 *
 * Return: nombre de bytes trouves
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, c;
	int f;

	c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
	f = 0;
	for (j = 0; accept[j] != '\0'; j++)
	{
	if (s[i] == accept[j])
	{
	f = 1;
	break;
	}
	}
	if (f == 0)
	break;
	c++;
	}
	return (c);
}
