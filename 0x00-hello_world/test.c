#include <stdio.h>

add(int a, int b)
{
	int sum;

	sum = a + b;

	return sum;
}

sub(int a, int b)
{
	int diff;
	diff = a - b;

	return diff;
}

int main(void)
{

	printf("This sum is %d ", sub(6,8));
	printf("This is the diff %d ", add(7,8));

	return (0);
}
