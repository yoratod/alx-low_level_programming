#include <stdio.h>
#include <stdiolib.h>
/*
 * main - prints a random number and states whether
 * it is positive,negative,or zero.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n = 2;

	if (n > 0)
	{
		printf("%d is positive\n");
	}
	else if (n < 0)
	{
		printf("%d is negative\n");
	}
	else
		printf("%d is zero\n");
	return (0);
}
