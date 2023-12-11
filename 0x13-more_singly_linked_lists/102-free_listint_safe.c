#include "lists.h"
/**
 * free_listint_safe - This function frees a linked lists
 * @h: The Pointer to that of  the first node in the linked list
 * Return:The  Number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t length = 0;
	int differ;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		differ = *h - (*h)->next;
		if (differ > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			length++;
			break;
		}
	}
	*h = NULL;
	return (length);
}
