#include "lists.h"

/**
 * list_len - print length of string
 * @h: node head
 * Return: node legnth
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
