#include "main.h"

/**
 * print_numbers - print the numbers from 0 to 9
 * Description: You can only use _putchar twice
 */
void print_numbers(void)
{
	char i;

	for (i = '0'; i < '10'; i++)

		_putchar(i);

	_putchar('\n');
}
