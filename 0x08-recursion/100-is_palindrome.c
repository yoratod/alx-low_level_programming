#include "main.h"
/**
 * is_palindrome - Check if a string is a palindrome
 * @s: String to check
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int l;

	l = _strlen_recursion(s);
	if (l <= 1)
		return (1);
	return (pal_check(s, l));
}
