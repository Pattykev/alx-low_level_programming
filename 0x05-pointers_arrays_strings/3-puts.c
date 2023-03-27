#include "main.h"

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

	while (*s != '\0')
	{
    		_putchar(*s + 0);
	        ++s;
	}
	_putchar('\n');
}
