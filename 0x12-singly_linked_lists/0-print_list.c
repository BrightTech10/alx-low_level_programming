#include "lists.h"


/**
 * print_list - function to print all elements in a list
 * @h: pointer to list
 *
 * Description: this function prints all elements in a list
 * and returns the number of nodes
 * Return: returns number of nodes
 */
size_t print_list(const list_t *h)
{
const list_t *temp;
size_t int count;

temp = h;

count = 0;
while (temp != NULL)
{
if (temp->str == NULL)
{
printf("[0] (nil)\n");
}
else
printf("[%d] %s\n", (temp->len), (temp->str));

temp = temp->next;
count++;
}

return (count);
}
