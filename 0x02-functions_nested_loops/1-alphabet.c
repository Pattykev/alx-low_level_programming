#include <stdio.h>


/**
 * main - Entry point
 *
 * Description: print alphabet
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char n='a';

	while(n <= 'z')
  	{
		_putchar(n);
                n++;
  	}
	_putchar('\n');

	return (0);
}
