#include"main.h"


/**
 * main - Entry point
 *
 * Description: print_alphabet_x10 - function that will print the alphabet 10 times
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
     			
    		}  
   		 _putchar('\n');
   		 
  	}
}
