#include "lists.h"
/**
 * free_listint - The code Frees a linked lists
 * @head:The listint_t list that is to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *mytemp;

	while (head)
	{
		mytemp = head->next;
		free(head);
		head = mytemp;
	}
}
