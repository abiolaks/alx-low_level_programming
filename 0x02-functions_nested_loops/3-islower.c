/**
 * _islower - is a function that checks for lower case character
 * Return: for return 1, found lowercase and 0 for other case
 * @c: is the characer to print out.
 */
int _islower(int c)
{
	if (c >= 0141 && c <= 0172)
	{
		return (1);
	}
	else
		return (0);
}
