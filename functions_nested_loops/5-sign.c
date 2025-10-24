#include "main.h"

/**
 * print_sign - print the sign of a number
 * @'n' - number
 *
 * Return: Always 0 (Success)
 */

int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n == 0)
		return (0);
	else
		return (-1);
}
