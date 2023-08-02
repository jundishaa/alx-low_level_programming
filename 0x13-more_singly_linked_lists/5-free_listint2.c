#include "lists.h"
/**
 * free_listint2 -The function that frees a linked lists
 * @head:The Pointer to the listint_t list that is to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *atemp;

	if (head == NULL)
		return;

	while (*head)
	{
		atemp = (*head)->next;
		free(*head);
		*head = atemp;
	}
	*head = NULL;
}
