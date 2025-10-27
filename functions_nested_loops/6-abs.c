#include "main.h"
#include <stdio.h>

/**
 * _abs - computes the absolute value of a integer
 * @i: the integerto check
 *
 * Return: the absolute value of i
 */

int _abs(int i)
{
	if (i < 0)
	return (-i);
	else
		return (i);
}
