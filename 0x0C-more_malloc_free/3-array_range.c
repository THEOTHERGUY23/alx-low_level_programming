#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates array of integers
 * @min: minimum number in array
 * @max: maximum number in array
 * Return: new allocated memory
 */

int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = min++;

	return (array);
}
