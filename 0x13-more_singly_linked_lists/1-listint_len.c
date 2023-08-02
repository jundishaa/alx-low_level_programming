#include "lists.h"
/**
 * listint_len -The code returns number of elements in linked list
 * @h: The linked lists of type listint_t to traverse
 * Return: The number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t somenum = 0;

	while (h)
	{
		somenum++;
		h = h->next;
	}
	return (somenum);
}
