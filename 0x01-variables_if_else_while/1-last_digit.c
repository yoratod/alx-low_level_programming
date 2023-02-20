#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -Entry point
 *
 *  Return: 0 Always (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("%d Last digit of," + n + "is greater than 5\n");
	}
	else if (n < 6 && n != 0)
	{
		printf("%d Last digit of," + n  + "less than 6 and not 0\n");
	}
	else
		printf("%d Last digit of," + n + "is 0\n");
	return (0);
}
