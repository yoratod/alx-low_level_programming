#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
s = "Puts with recursion";
_puts_recursion("%char",s);
_puts('\n');
    return (0);
}
