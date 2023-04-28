#include "lists.h"

/**
*print_listint - prints data form a linked list
*@h: the struct linked list
*Return: size_t
*/

size_t print_listint(const listint_t *h)
{
  size_t num = 0;
  
  while (h != NULL)
  {
    num++;
    printf("%d", h->n);
    h = h->next;
  }
  
  return (num);
}
