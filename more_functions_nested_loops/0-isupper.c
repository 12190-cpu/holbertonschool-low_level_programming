#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase character
 *@c: the char to check
 *
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
	return (1);
else
	return (0);
}
