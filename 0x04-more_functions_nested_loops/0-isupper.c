#include <stdio.h>

/**
 * _isupper - check the code.
 *
 *@c: input
 * Return: 1 if c is uppercase otherwise 0.
 */
#include <stdio.h>
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
