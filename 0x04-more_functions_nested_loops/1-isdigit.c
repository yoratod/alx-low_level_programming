/**
 * _isdigit - check the code
 *
 * @c: input
 * Return: 1 if c is uppercase otherwise 0..
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
