#include "main.h"
#include <stdio.h>

/**
 * swap_int -  swaps the values of two integers
 *
 * @a; input
 * @b: input
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
int a;
int b;

a = 98;
b = 42;
int c = a;

a = b;
b = c;
printf("a=%d, b=%d\n", a, b);
return (0);
}
