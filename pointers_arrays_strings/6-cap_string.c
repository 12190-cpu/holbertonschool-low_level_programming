#include "main.h"

/**
 * cap_string - Met en majuscule la première lettre de chaque mot
 * @s: Chaîne de caractèr a modifier
 *
 * Return: La chaîne modifiée
 */
char *cap_string(char *s)
{
	int i = 0;
	int capitalize = 1;

	while (s[i])
	{
	if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
	s[i] == ',' || s[i] == ';' || s[i] == '.' ||
	s[i] == '!' || s[i] == '?' || s[i] == '"' ||
	s[i] == '(' || s[i] == ')' || s[i] == '{' ||
	s[i] == '}')
	{
	cap = 1;

	else if (cap && s[i] >= 'a' && s[i] <= 'z')
	{
	s[i] = s[i] - ('a' - 'A');
	cap = 0;
	}
	else
	{
	cap = 0;
	}
	i++;
	}
	return (s);
}
