#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print 0, 1, - 9
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit = 0, i=1;

	while (digit <= 8)
	{
    for( ; i<=9 ; )
    {
		putchar(digit + 48);
                putchar(i + 48);

		if (digit != 8)
		{
			putchar(',');
			putchar(' ');
		}

		
      i++;
	}
    ++digit;
  }
	putchar('\n');

	return (0);
}
