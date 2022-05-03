#include "main.h"

/**
 * _strcmp - This function compares two strings
 * @s1: the first array of char
 * @s2: the second array of char to compare with s1
 *
 * Return: This return an int which is which can either 0 or 1
 */

int _strcmp(char *s1, char *s2)
{
	/**
	 * check each char increment
	 * char pointer to by s minus char pointer to by t
	 * increment both of them
	 * if the same equal to zero
	 * if difference (it can return either -ve of +ve
	 *  when you walk off the array you get a segmentation fault
	 */

	while (*s1 != 0 && *s2 != 0 && *s1 - *s2 == 0)
	{
		s1++;/* increment memory address to check next value */
		s2++;

	}
	return (*s1 - *s2);
}
