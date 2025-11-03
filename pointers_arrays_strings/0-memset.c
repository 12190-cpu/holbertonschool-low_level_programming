#include "main.h"

/**
 * memset - met en memoire avec un meme octet
 * @s: pointeur vers le debut de la memoire
 * @b: octet a mettre en memoire
 * @n: nombre de fois qu'on remplit l'octet
 *
 * Return: La chaîne modifiée
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
	s[i] = b;
	}

	return (s);
}
