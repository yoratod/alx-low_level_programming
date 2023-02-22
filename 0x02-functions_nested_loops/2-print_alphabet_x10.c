#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
print_alphabet_x10();

return (0);
}
void print_alphabet_x10(void)
{
	char i;
	int a;

	for (a = 0 ; a <= 10; a++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
