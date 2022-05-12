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

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

/**
 * init_dog - This function header initiaze a variable of type struct
 * dog
 * @d: pointer to struct
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: The above initialize the name, age and owner of
 * a dog.
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - prints a struct dog
 * @d: pointer to struct dog
 *
 * Description: This prints the a struct dog
 */
void print_dog(struct dog *d);
#endif
