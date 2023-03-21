#include"main.h"

/**
 * main - Entry point
 *
 * Description: print if the number is a lower character
 *           
 *
 * Return: Always 0 (Success)
*/

int _islower(int c)
{
      if(c >= 97 && c <= 122)
      {
            return (1);
      }
      else
      {
            return (0);
      }  
}
