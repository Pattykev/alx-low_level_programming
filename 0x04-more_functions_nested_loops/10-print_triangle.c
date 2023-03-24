#include"main.h"

/**
 * print_triangle - print a triangle
 *
 * @size: is the number of lines
 *     should be printed
*/

void print_triangle(int size)
{
	int postn, space;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (postn = 1; postn <= size; postn++)
		{
			for (space = 1; space <= size; space++)
				if (postn + space <= size)
					_putchar(' ');
				else
					_putchar(35);
				_putchar('\n');
		}
	}
}
