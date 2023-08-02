#include "lists.h"
/**
 * print_listint - This code Prints all elements of a linked lists
 * @h: The linked lists of type listint_t to print
 * Return: The number of node
 */
size_t print_listint(const listint_t *h)
{
	size_t somenum = 0;

	while (h)
	{
		printf("%d\n", h->n);
		somenum++;
		h = h->next;
	}
	return (somenum);
}
