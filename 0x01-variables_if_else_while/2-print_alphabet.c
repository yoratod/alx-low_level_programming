#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch < 'z' ; ch++)
	{
		putchar("%c lowercase alphabet\n", ch);
	}
	return (0);
}
