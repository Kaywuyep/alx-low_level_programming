#include <stdlib.h>
#include "main.h"
/**
 * free_grid - a function that validates a freed 2-D array
 * @grid: grid to be freed
 * @height: height of array
 * Return: void
 */
void free_grid(int **grid, int height)
{
int i;
if (grid == NULL)
{
return;
}
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
