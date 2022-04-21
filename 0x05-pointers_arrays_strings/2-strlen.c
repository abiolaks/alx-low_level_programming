/**
 * _strlen - This function returns the length of a string
 * @s: where s is pointer to a char type
 *
 * Return: It returns and integer which isthe equivlaent to the
 * of the string
 */

int _strlen(char *s)
{
	char *t;
	int size;

	size = 0;

	for (t = s; *t != '\0'; t++)
	{
		size++;
	}
	return (size);
}
