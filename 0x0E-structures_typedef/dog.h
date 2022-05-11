#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines attributes for dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: return nothing
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * init_dog - This function header initiaze a variable of type struct
 * dog
 * @d: pointer to struct
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: returns nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
