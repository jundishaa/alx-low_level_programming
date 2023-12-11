#include "lists.h"
/**
 * sum_listint -This calculates the sum of all the data in a list
 * @head: The first node that is in the linked lists
 * Return:returns resulting sum
 */
int sum_listint(listint_t *head)
{
	int summation = 0;
	listint_t *temp = head;

	while (temp)
	{
		summation += temp->n;
		temp = temp->next;
	}
	return (summation);
}

