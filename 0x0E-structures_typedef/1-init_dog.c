#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to type struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: returns nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
