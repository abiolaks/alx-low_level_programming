#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: a pointer to struct dog
 *
 * Return: it returns nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
