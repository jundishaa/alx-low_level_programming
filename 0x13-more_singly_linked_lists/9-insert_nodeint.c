#include "lists.h"
/**
 * insert_nodeint_at_index - this code inserts a new node at a given position
 * @head:The pointer to the first node
 * @idx: The index at which the new node is added
 * @n: The data to insert in the new node
 * Return:The  pointer to the new node (NULL)
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *mynew;
	listint_t *temp = *head;

	mynew = malloc(sizeof(listint_t));
	if (!mynew || !head)
		return (NULL);

	mynew->n = n;
	mynew->next = NULL;

	if (idx == 0)
	{
		mynew->next = *head;
		*head = mynew;
		return (mynew);
	}

	for (x = 0; temp && x < idx; x++)
	{
		if (x == idx - 1)
		{
			mynew->next = temp->next;
			temp->next = mynew;
			return (mynew);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
