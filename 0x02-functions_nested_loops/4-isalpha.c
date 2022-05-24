#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * and returns 1 if c is a letter, lowercase,
 * or uppercase, otherwise 0
 * @c: parameter to test for different cases
 *
 * Description: This function checks for alphabetic characters
 * main - Entry point
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
