#include "main.h"
#include <stdlib.h>

/**
 * free_grid - libe¨re une grille 2D d'entiers alloe©e par alloc_gri
 * @grid: pointeur vers la grille a liberer
 * @height: nombre de lignes de la grille
 *
 * Return: rien (void)
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
