#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print in binary
 */
void print_binary(unsigned long int n)
{
    if (n > 1)  /* base case: if n is 0 or 1, just print it */
        print_binary(n >> 1);

    _putchar((n & 1) ? '1' : '0');  /* print the last bit of n */
}

