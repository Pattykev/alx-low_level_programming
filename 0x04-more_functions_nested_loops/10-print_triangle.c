#include"main.h"

/**
 * print_triangle - print a triangle
 *
 * @size: is the number of lines
 *     should be printed
*/

void print_triangle(int size)
{
	int postn, space, diez;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (postn = 1; postn <= size; postn++)
		{
			for (space = size; space > (size-postn); space--)
				_putchar(' ');
     		        for (diez = 0; diez < postn; diez++)
				_putchar(35);
			_putchar('\n');
		}
	}
}
