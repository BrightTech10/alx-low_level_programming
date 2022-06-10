#include "lists.h"

/**
 * free_dlistint - frees list
 *
 * @head: node pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp1, *temp2;

	temp1 = temp2 = head;
	if (head != NULL)
	{
		while (temp1->next != NULL)
		{
			temp1 = temp1->next;
			free(temp2);
			temp2 = temp1;
		}
		free(temp2); /* Frees the last node */
	}
}
