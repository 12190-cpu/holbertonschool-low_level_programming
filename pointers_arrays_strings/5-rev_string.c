#include "main.h"

/**
 * rev_string - inverse une chaîne de caractères
 * @s: la chaîn a inverser
 *
 * Retour: rien (void)
 */
void rev_string(char *s)
{
	int i = 0, j;
	char temp;

	while (s[i] != '\0')
	i++;
	for (j = 0; j < i / 2; j++)
	{
	temp = s[j];
	s[j] = s[i - j - 1];
	s[i - j - 1] = temp;
	}
}
