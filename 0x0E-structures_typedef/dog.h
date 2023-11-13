#ifndef DOG_H
#define DOG_H

/**
 * struct dog - prints dog details
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: Define the dog name, age and the owner of the dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;
#endif
