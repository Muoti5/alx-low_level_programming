#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure with the following elements
 * @name: first member
 * @age: second member
 * @owner: Third member
 *
 * Description: structure dog has three elements as shown below
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
