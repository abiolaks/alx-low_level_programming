/**
 * main - Entry point
 *
 * _putchar - dispaly character to the output using system call.
 *
 * @c: The character to print
 *
 * Return: If the value pass is (0) means program successful
 *
 */
int _putchar(char c);

int main(void)
{
	char c[] = "_putchar";
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
