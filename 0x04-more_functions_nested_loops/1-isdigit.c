/**
 * _isdigit - check if c is a digit
 *
 * @c: input for alphabet
 *
 * Return: 1 if it's digit, 0 if not
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
