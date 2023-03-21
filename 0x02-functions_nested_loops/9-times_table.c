#include"main.h"

/**
 * jack_bauer- prints every minute of the day
*/

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
      _putchar(' ');
			_putchar(((i * j) / 10) + 48);
      _putchar(((i * j) % 10) + 48);
			
		}
    _putchar('\n');
	}
}
