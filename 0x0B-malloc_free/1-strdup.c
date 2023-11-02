#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *duplicate;
	int index, len = 0;

	duplicate = malloc(sizeof(char) * (len));

	if (str == NULL || duplicate == NULL)
	{
		return (NULL);
	}
	for (index = 0; str[index]; index++)
	{
		len++;
	}
	duplicate = malloc(sizeof(char) * (len + 1));
	for (index = 0; str[index]; index++)
	{
		duplicate[index] = str[index];
	}
	duplicate[len] = '\0';
	return (duplicate);
}
