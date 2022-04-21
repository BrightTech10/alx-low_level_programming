#include "lists.h"

/**
 * print_list - prints all elements in a list
 * @h: pointer to list
 *
 * Return: returns number of nodes
 */

size_t print_list(const list_t *h)
{
size_t count; /* Declare count for number of nodes */

count = 0; /* initialize count to 0 */
/* Loop through list while list is not empty */
while (h != NULL)
{
if (h->str == NULL) /* condition for empty string */
{
printf("[0] (nil)\n");
}
else /* if string != empty, print list elements */
printf("[%u] %s\n", h->len, h->str);

h = h->next;
count++;
}
/* return number of nodes */
return (count);
}
