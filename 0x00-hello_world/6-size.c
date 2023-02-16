#include <stdio.h>
/**
 * Description main: prints the size of every variable type
 *
 * Return: 0 on success
 */
int main(void)
{
printf("The size of char: %d byte(s)\n", sizeof(char));
printf("The size of int: %d byte(s)\n", sizeof(int));
printf("The size of long int: %d byte(s)\n", sizeof(long int));
printf("The size of long long int: %d byte(s)\n" sizeof(long long int));
printf("The size of float: %d byte(s)\n" sizeof(float));
return (0);
}
