#include"main.h"

/**
 * _puts - prints a string, followed by a newline to stdout
 *
 * @str: string parameter to print
 *
 * Return: Nothing
*/

void _puts(char *str)
{
	int i = 0;
	while (*(str + i) != '\0')
	{
		_putchar(*(str + i) + 0);
		++i;
	}
	_putchar('\n');
}
