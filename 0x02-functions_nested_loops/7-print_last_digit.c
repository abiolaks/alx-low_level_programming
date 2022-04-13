/**
 * print_last_digit - This function prints the last digit of a number
 * Return: returns zero for success
 * @i: The test value
 */
int print_last_digit(int i)
{
	int ldgt;

	if (i < 0)
	{
		i = -i;
	}
	ldgt = i % 10;

	if (ldgt < 0)
		ldgt = -ldgt;
	_putchar(ldgt + '0');
	return (ldgt);

}
