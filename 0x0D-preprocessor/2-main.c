#include<stdio.h>

/**
*main - return the name of the compile function
*@argc: the number of parameters past to the program
*@argv: an array of parameter
*
*/

int main(int argc __attribute__((unsed)), char *argv[])
{
  printf("%s\n", argv[0]);
  return (0); 
}
