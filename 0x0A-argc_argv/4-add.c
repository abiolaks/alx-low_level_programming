#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - the entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: return 0 for success and 1 for error
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	if (argc == 1)
	{
		return (sum);
	}
	else if (argc > 1)
	{
		while (i < argc)
		{
			int j = 0;

			while (argv[i][j] != '\0')
			{

				if (!(isdigit(argv[i][j]))jjjj)
				{
					printf("Error\n");
					return (1);
				}
				else
				{
					sum = sum + atoi(argv[i]);
				}
				j++;
			}
			i++;
		}
	}
	printf("%d\n", sum);

	return (0);
}
