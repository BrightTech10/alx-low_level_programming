#include "lists.h"

/**
 * print_list - prints all elements in a list
 * @h: pointer to list
 * Return: number of elements printed
 */

size_t print_list(const list_t *h)
{
/*declare variables to be used in loop and node*/
size_t count = 0;
/* Loop through list while list is not empty */
while (h != NULL)
{
/* condition for empty string */
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%u] %s\n", h->len, h->str);
/* Point to address of the next struct*/
h = h->next;
count++;
}

return (count);
}