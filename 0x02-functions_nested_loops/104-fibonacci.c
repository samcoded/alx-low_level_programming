#include <stdio.h>

/**
 * main - main block 104-fibonacci
 * Description: computes and prints the sum of all the multiples of 3 or
 * 5 below 1024 (excluded), followed by a new line
 * Return: 0
 */
int main(void)
{
	int counter = 0;
	unsigned long first = 0;
	unsigned long second = 1;
	unsigned long fib;

	while (counter <= 97)
	{
		fib = first + second;
		if (counter < 97)
		{
			printf("%lu, ", fib);
		}
		else
		{
			printf("%lu", fib);
		}
		first = second;
		second = fib;
		counter++;
	}
	printf("\n");
	return (0);
}
