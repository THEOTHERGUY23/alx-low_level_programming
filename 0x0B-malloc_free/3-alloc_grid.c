#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim array
 */

int **alloc_grid(int width, int height)
{
	int **twoD;
	int hgt_index, wid_index;

	twoD = malloc(sizeof(int *) * height);

	if (width <= 0 || height <= 0 || twoD == NULL)
	{
		return (NULL);
	}
	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		twoD[hgt_index] = malloc(sizeof(int) * width);
		if (twoD[hgt_index] == NULL)
		{
			for (; hgt_index >= 0; hgt_index--)
			{
				free(twoD[hgt_index]);
			}

			free(twoD);
			return (NULL);
		}
	}
	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		for (wid_index = 0; wid_index < width; wid_index++)
		{
			twoD[hgt_index][wid_index] = 0;
		}
	}
	return (twoD);
}
