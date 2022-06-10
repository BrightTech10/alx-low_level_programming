#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts new node at a given position
 *
 * @h: node pointer
 * @idx: index position
 * @n: data for new node
 * Return: returns address of new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	size_t count;
	dlistint_t *temp, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	if (*h == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	temp = *h;
	if (idx == 0)
	{
		new->next = *h;
		(*h)->prev = new;
		*h = new;
		return (new);
	}
	else
	{
		count = 0;
		while (temp)
		{
			count++;
			if (count == idx)
			{
				new->prev = temp;
				new->next = temp->next;
				temp->next = new;
				new->next->prev = new;
			}
			temp = temp->next;
		}
	}

	return (new);
}
