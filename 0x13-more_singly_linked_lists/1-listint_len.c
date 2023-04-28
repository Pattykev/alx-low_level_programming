#include "lists.h"

/**
*listint_len - return the length of a linked list
*@h: the struct linked list to manipulate
*Return: size_t
*/

size_t listint_len(const listint_t *h)
{
  size_t num = 0;
  
  while (h != NULL)
  {
    num++;
    h = h->next;
  }
  
  return (num);
}
