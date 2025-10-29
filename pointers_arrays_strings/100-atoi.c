#include "main.h"

/**
 * _atoi - convertit une chaîne en entier
 * @s: la chaînea convertir
 *
 * Return: l'entier correspondant
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, result = 0;

	while (s[i] != '\0')
	{
	if (s[i] == '-')
			sign *= -1;
	else if (s[i] >= '0' && s[i] <= '9')
	break;
	i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
	result = result * 10 + (s[i] - '0');
	i++;
	}

	return (sign * result);
}
