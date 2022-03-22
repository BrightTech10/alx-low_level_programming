#include "main.h"

/**
 * _strlen - function to find the length of a string
 * @s: string of characters to be counted
 * Return: return the length of string
*/



int _strlen(char *a)
{
	char *str;
	int len;
	str = "Holberton!";
	len = strlen(str);
	printf("%d\n", len);
	return (0);
}
