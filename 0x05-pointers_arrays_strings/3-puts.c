#include "main.h"

/**
 * _puts - funtion that prints a string
 * @str: string to be printed
 * Return: void
 */

void _puts(char *str)
{
	int o;

	for (o = 0 ; str[o] != '\0' ; o++)
		_putchar(str[o]);
	_putchar('\n');
}
