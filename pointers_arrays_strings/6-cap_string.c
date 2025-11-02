#include "main.h"

/**
 * cap_string - Met en majuscule la premiÃ¨re lettre de chaque mt
 * @s: CaractÃre¨s a modifir
 *
 * Return: La chaÃ®ne modifiÃ
 */
char *cap_string(char *s)
{
	char *ptr = s;
	int capitalize = 1;

	while (*ptr)
	{
	if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' ||
	*ptr == ',' || *ptr == ';' || *ptr == '.' ||
	*ptr == '!' || *ptr == '?' || *ptr == '"' ||
	*ptr == '(' || *ptr == ')' || *ptr == '{' ||
	*ptr == '}')
	{
	capitalize = 1;
	}
	else if (capitalize && *ptr >= 'a' && *ptr <= 'z')
	{
	*ptr = *ptr - ('a' - 'A');
	capitalize = 0;
	}
	else
	{
	capitalize = 0;
	}
	ptr++;
	}
	return (s);
}
