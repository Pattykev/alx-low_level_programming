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
	int digit = 0, a = 2, i=1;

	while (digit <= 7)
	{
    for( ; i<=8 ; )
    {
      
      for(; a<=9 ; )
    {
		putchar(digit + 48);
    putchar(i + 48);
    putchar(a + 48);

		if (digit != 7)
		{
			putchar(',');
			putchar(' ');
		}

		  a++;
     
	}
      i++;
		

		
     
	}
    ++digit;
  }
	putchar('\n');

	return (0);
