#include <stdio.h>

/**
 * main - Entry point to prints the alphabet, in lowercase
 *
 * Return: Always 0.
 */
int main(void)
{
print_alphabet();
return (0);
}
void print_alphabet(void)
{
	int a;

	for (a = 'a'; a < 'z'; a++)
	{
		printf(a);
	}
	printf('\n');
}
