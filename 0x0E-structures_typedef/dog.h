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
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
