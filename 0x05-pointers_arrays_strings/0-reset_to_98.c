#include "main.h"
#include <stdio.h>

/**
 * main - check the code 
 *
 * Return: Always 0.
 */
void reset_to_98(int *n)
{
    int n;

    int n = 98;
    int *p = &n;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);
    
}
