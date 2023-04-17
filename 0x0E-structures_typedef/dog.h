#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - a structure which describe a dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: a dog must may have a name, an age and an owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
