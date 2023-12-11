#include "lists.h"
/**
 * add_nodeint_end -This code is to add node at the end of each linked lists
 * @head: a pointer to the first elements in the lists
 * @n:the  data to insert in the new elements
 * Return: pointer to the new node (NULL if it fails)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *temp = *head;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = newnode;

	return (newnode);
}

