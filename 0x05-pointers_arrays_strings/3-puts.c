/**
 * _puts - print a string
 *
 * @s: string parameter input
 *
 * Return: nothing
*/

void _puts(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; ++s)
		++counter;
    _putchar(*s + 0);
}
