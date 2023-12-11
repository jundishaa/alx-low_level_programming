#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);
/**
 * looped_listint_len -This code Counts the Number of unique node
 * @head: The pointer to the head of the listint_t to check.
 * Return: 0 If the list is not looped
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *mytortoise, *somehare;
	size_t atnodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	mytortoise = head->next;
	somehare = (head->next)->next;

	while (somehare)
	{
		if (mytortoise == somehare)
		{
			mytortoise = head;
			while (mytortoise != somehare)
			{
				atnodes++;
				mytortoise = mytortoise->next;
				somehare = somehare->next;
			}
			mytortoise = mytortoise->next;

			while (mytortoise != somehare)
			{
				atnodes++;
				mytortoise = mytortoise->next;
			}
			return (atnodes);
		}

		mytortoise = mytortoise->next;
		somehare = (somehare->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe -This code is intended to  Print a listint_t list safely.
 * @head:The pointer that is to the head of the listint_t list.
 * Return: Number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t thenodes, myindex = 0;

	thenodes = looped_listint_len(head);

	if (thenodes == 0)
	{
		for (; head != NULL; thenodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (myindex = 0; myindex < thenodes; myindex++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (thenodes);
}
