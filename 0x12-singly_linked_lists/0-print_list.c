#include "lists.h"

/**
 * print_list - prints all elements in a list
 * @h: pointer to list
 *
 * Return: returns number of nodes
 */

size_t print_list(const list_t *h)
{
/* Declare count for number of nodes */
size_t count;

count = 0;
/* Loop through list while list is not empty */
while (h != NULL)
{
/* condition for empty string */
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else /* if string != empty, print list elements */
printf("[%u] %s\n", h->len, h->str);

/* move to next node */
h = h->next;
count++;
}
/* return number of nodes */
return (count);
}

