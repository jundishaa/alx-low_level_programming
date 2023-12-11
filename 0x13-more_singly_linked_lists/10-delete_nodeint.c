#include "lists.h"
/**
 * delete_nodeint_at_index -This code  deletes a node in a linked list
 * @head:The Pointer to the first element that in the lists
 * @index: The index of the node that deleted
 * Return: Success or 1, -1 or Fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *mytemp = *head;
	listint_t *mycurrent = NULL;
	unsigned int y = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(mytemp);
		return (1);
	}

	while (y < index - 1)
	{
		if (!mytemp || !(mytemp->next))
			return (-1);
		mytemp = mytemp->next;
		y++;
	}
	mycurrent = mytemp->next;
	mytemp->next = mycurrent->next;
	free(mycurrent);
	return (1);
}
