#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for digit character
 *@c: the char to check
 *
 * Return: Always 0 (Success)
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
	return (1);
else
	return (0);
}
