#include "dog.h"

/**
 * init_dog - Shor
 * @name: The name of the dog
 * @d: Pointer to struct
 * @age: The dog age
 * @owner: The owner of the dog
 *
 * Description: Initialize a variable typr struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
