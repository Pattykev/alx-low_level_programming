#include"main.h"


/**
 * main - Entry point
 *
 * Description: print alphabet
 *
 * Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	char n;
  	int t;
 	 for(t = 1; t <= 10; t++)
  	{
    		for(n = 'a'; n <= 'z'; n++)
    		{
    			 _putchar(n);
     			 n++;
    		}  
   		 _putchar('\n');
   		 
  	}
}
