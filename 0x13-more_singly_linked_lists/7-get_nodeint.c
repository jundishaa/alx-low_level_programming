#include "lists.h"
/**
 * get_nodeint_at_index - This code returns the nth node in a linked list
 * @head: The First node in the linked lists
 * @index:The index of the node to return
 * Return:The pointer to the node we're looking for (NULL)
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *temp = head;

	while (temp && a < index)
	{
		temp = temp->next;
		a++;
	}
	return (temp ? temp : NULL);
}

