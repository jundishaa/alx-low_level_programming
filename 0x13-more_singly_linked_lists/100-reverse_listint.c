#include "lists.h"
/**
 * reverse_listint - this function reverses a linked lists
 * @head:The Pointers to the first node in the lists
 * Return: The pointer to the first node that is in the new lists
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *myprev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = myprev;
		myprev = *head;
		*head = next;
	}
	*head = myprev;
	return (*head);
}
