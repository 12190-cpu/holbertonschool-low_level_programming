#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Affiche un échiquier de 8x8.
 * @a: tableau 8x8 caractères
 *
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
	for (j = 0; j < 8; j++)
	{
	putchar(a[i][j]);
	}
	putchar('\n');
	}
}
