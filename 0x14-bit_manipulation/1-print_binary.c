#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number to print in binary
 */
void print_binary(unsigned long int n)
{
    unsigned long int mask = 1;  /* create a mask with the lowest bit set to 1 */

    /* shift the mask left until the highest bit of n is reached */
    while ((mask << 1) <= n)
        mask <<= 1;

    /* print the binary representation of n by checking each bit in the mask */
    while (mask > 0)
    {
        if (n & mask)
            _putchar('1');
        else
            _putchar('0');

        mask >>= 1;  /* shift the mask right to check the next bit */
    }
}

