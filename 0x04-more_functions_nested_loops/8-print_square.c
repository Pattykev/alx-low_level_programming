#include"main.h"

/**
 * print_square - print a square of #
 *
 * @size: is the size of the square and the # character
 *     should be printed per size
*/

void print_size(int size)
{
	int postn, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (postn = 0; postn < n; postn++)
		{
			for (space = 0; space < n; space++)
				_putchar(35);
			_putchar('\n');
		}
	}
}
