/**
 * _isalpha - this function checks for alphabetic character
 * either uppercase or lower case
 *
 * Return: return 1 if it is an alphabet and 0 of others
 * condition
 * @c: test character
 */
int _isalpha(int c)
{
	if ((c >= 0141 && c <= 0142) || (c >= 0101 && c <= 0132))
	{
		return (1);
	}
	else
		return (0);
}
