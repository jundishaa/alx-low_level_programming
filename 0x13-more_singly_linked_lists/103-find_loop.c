#include "lists.h"
/**
 * find_listint_loop -This code intends to finds loop in a linked lists
 * @head: This is linked list to search for
 * Return: The address of the node where the loop starts(NULL)
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *veryslow = head;
	listint_t *veryfast = head;

	if (!head)
		return (NULL);

	while (veryslow && veryfast && veryfast->next)
	{
		veryfast = veryfast->next->next;
		veryslow = veryslow->next;
		if (veryfast == veryslow)
		{
			veryslow = head;
			while (veryslow != veryfast)
			{
				veryslow = veryslow->next;
				veryfast = veryfast->next;
			}
			return (veryfast);
		}
	}
	return (NULL);
}

