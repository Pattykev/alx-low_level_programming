#include"main.h"

/**
 * print_times_table -  print an n times table
 *
 * @n: is the int parameter
 *
 */

void print_times_table(int n)
{
	int mult, i, j;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{       _putchar(48);
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');
				mult = i * j;

				if (mult <= 9)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (mult >= 10 && mult <= 99)
				{	_putchar(' ');
					_putchar((mult / 10) + 48);
				} 
				else
				{	_putchar((mult / 100) + 48);
					_putchar(((mult / 10) % 10) + 48);
				}
				_putchar((mult % 10) + 48);		
			}
		_putchar('\n');	
		}
	}
}
