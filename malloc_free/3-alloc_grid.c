#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - cr√©e une grille 2D d'entiers initialise© a 0
 * @width: nombre de colonnes
 * @height: nombre de lignes
 *
 * Return: pointeur vers la grille, ou NULL si e©chec ou dimensions invalides
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
	return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	return (NULL);

	for (i = 0; i < height; i++)
	{
	grid[i] = malloc(sizeof(int) * width);
	if (grid[i] == NULL)
	{
	while (i > 0)
	{
	i--;
	free(grid[i]);
	}
	free(grid);
	return (NULL);
	}

	for (j = 0; j < width; j++)
	grid[i][j] = 0;
	}

	return (grid);
}
