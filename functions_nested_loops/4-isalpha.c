#include "main.h"

/**
 * _isalpha - check for alphabetic character
 * @c: character to check
 *
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
