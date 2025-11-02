#include "main.h"

/**
 * leet - Encode une chaîne en "1337"
 * @s: Chaîne à encoder
 *
 * Return: La chaîne modifiée
 */
char *leet(char *s)
{
	char *ptr = s;
	char *letters = "aAeEoOtTlL";
	char *numbers = "4433007711";
	char *p;

	while (*ptr)
	{
	p = letters;
	while (*p)
	{
	if (*ptr == *p)
	{
	*ptr = numbers[p - letters];
	break;
	}
	p++;
	}
	ptr++;
	}
	return (s);
}
