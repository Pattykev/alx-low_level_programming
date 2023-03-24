#include "main.h"

/**
 * print_diagonal - enter point of the functions
 *
 * @n: integer parameter
 *
 * Return: nothing
 *
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
   		 _putchar(92);
	}
	_putchar('\n');
}
