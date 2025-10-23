#include "main.h"

/**
 * _isalpha(int c) - check for alphabetic character
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
