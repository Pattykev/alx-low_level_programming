#include <stdio.h>
#include "dog.h"

/**
*init_dog - initiate a variable of type struct dog
*@d: the variable
*@name: the name of the dog
*@age: the age of the dog
*@owner: the owner of the dog
*
*Return nothing
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
    d={.name=name, .age=age, .owner=owner};
}
