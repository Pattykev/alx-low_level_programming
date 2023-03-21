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
    			 _putchar(n);
     			 n++;
    		}  
   		 _putchar('\n');
   		 t++;
  	}

	return (0);
}
