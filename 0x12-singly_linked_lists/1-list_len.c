#include <stdlib.h>
#include "lists.h"
/**
 * list_len -this returns the number of elements in a linked list
 * @h: pointer to the list_t lists
 * Return: the number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}
