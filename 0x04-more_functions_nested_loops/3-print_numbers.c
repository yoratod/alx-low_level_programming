#include "main.h"

/**
 * print_numbers(void) - check the code
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');
}
