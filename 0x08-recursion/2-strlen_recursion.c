#include "main.h"

/**
 * _strlen_recursion - function to return the length of a string
 *
 * @s: character to be checked
 * Return: returns 0 if string reaches null character
 * else the length of the string
*/

int _strlen_recursion(char *s)
{
/* When string reaches the null character, it returns 0 */
if (*s == '\0')
return (0);

/* Keep adding 1 until string reaches null character */
/* and then return total value */
else
return (1 + _strlen_recursion(s + 1));
}
