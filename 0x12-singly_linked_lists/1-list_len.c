#include "lists.h"

/**
 * print_len - number of elements in a list
 * @h: pointer to list
 *
 * Return: returns number of elements
 */

size_t list_len(const list_t *h)
{
/* Declare count for number of elements */
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

/* move to next node */
h = h->next;
count++;
}
/* return number of elements */
return (count);
}
