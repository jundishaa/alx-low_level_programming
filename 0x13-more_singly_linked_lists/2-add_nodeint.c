#include "lists.h"
/**
 * add_nodeint -The code adds a new node at The beggining linked list
 * @head:The pointer to the first node in the lists
 * @n: The data to insert in that new nodes
 * Return: pointer to the new node,(NULL if it fails)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
