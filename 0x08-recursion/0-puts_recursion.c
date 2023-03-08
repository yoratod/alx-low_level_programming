#include "main.h"

/**
 * _puts_recursion - write a number
 *
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
s = "Puts with recursion";
_puts_recursion("%char", s);
_puts('\n');
return (0);
}
