#include <stdio.h>

/**
 * main - print numbers from 0 - 100 for 3 multiple print
 *                 'Fizz', 5 multiple print 'Buzz' and 3 and 5 multiple 'FizzBuzz'
 *                 use printf()
 * Return: Always 0 (Success)
*/

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
			printf("FizzBuzz");
    		else if (num % 5 == 0 && num % 3 != 0)
			printf("Buzz");
    		else if (num % 3 == 0 && num % 5 != 0)
      			printf("Fizz");
		else
      			printf("%d", num);
		
		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}
	
	return (0);
}
