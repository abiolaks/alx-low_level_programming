#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - fill a copy of string to memory allocated
 * @name: copy of string name
 * @age: hold the age
 * @owner: hold the copy of the owner name
 *
 * Return: a pointer to string
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int name_length, owner_length, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (name_length = 0; name[name_length]; name_length++)
		;
	name_length++;
	dog->name = malloc(name_length * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < name_length; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (owner_length = 0; owner[owner_length]; owner_length++)
		;
	owner_length++;
	dog->owner = malloc(owner_length * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < owner_length; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
