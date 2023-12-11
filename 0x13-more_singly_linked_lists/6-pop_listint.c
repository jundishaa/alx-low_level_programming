#include "lists.h"
/**
 * pop_listint -This code deletes the head node of a function's linked list
 * @head: The Pointer to first elements in the linked lists
 * Return: Data inside elements that was deleted,
 * (0 if the list is empty)
 */
int pop_listint(listint_t **head)
{
	listint_t *mytemp;
	int number;

	if (!head || !*head)
		return (0);

	number = (*head)->n;
	mytemp = (*head)->next;
	free(*head);
	*head = mytemp;
	return (number);
}

