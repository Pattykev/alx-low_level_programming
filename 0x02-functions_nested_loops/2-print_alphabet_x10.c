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
  int t=1;
  while(t<=10)
  {
    while(n <= 'z')
    {
     putchar(n);
     n++;
    }  
    putchar('\n');
    t++;
  }

	return (0);
}
