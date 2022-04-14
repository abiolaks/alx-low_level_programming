#include <stdio.h>

/**
 * main - entry point
 * Return: Always return success.
 *
 * Description: print th first 50 fibonnaci numbers starting
 * 1 and 2 followed by newline
 */
int main(void)
{
	long int i;
	long int j;
	long int k;
	long int next;

	j = 1;
	k = 2;

	for (i = 1; i <= 50; ++i)
	{
		if (j != 20365011074)
		{
			printf("%ld", j);
		    putchar(',');
		    putchar(' ');
		}
		else if (j == 20365011074)
		{
			printf("%ld", j);
			break;
		}
		next = j + k;
		j = k;
		k = next;
	}
	putchar('\n');
	return (0);
}
