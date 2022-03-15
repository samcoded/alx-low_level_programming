#include <stdio.h>

/**
 * main - main block 104-fibonacci
 * Description: computes and prints the sum of all the multiples of 3 or
 * 5 below 1024 (excluded), followed by a new line
 * Return: 0
 */
int main(void)
{
	int i = 0;
	unsigned long int a = 0, b = 1, next = 0;

	while (i < 100)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", next);

		if (i < 99)
			printf(", ");
		i++;
	}
	printf("\n");
	return (0);
}
