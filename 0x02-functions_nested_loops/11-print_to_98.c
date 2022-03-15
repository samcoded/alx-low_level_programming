// #include "main.h"
#include "_putchar.c"
#include <stdio.h>
/**
 * print_to_98 - prints from a given number up to 98
 * @n: the number to start from

 * Return: Nothing, Void
 */
void print_to_98(int n)
{
	int t, d;

	if (n > 98)
	{
		for (; n >= 98; n--)
		{
			if (n != 98)
			{
				if (n > 99)
				{
					d = n / 100;
					_putchar(d % 10 + '0');
				}

				if (n > 9)
				{
					t = n / 10;
					_putchar(t % 10 + '0');
				}
				_putchar(n % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('9');
				_putchar('8');
				_putchar('\n');
			}
		}
	}
	else
	{
		for (; n <= 98; n++)
		{
			if (n < 0)
			{
				_putchar('-');
				if (n < -9)
				{
					t = n / 10;
					_putchar((t * -1) % 10 + '0');
				}
				_putchar((n * -1) % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (n != 98)
			{
				if (n > 99)
				{
					d = n / 100;
					_putchar(d % 10 + '0');
				}

				if (n > 9)
				{
					t = n / 10;
					_putchar(t % 10 + '0');
				}
				_putchar(n % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar('9');
				_putchar('8');
				_putchar('\n');
			}
		}
	}
}

int main(void)
{
	print_to_98(0);
	print_to_98(98);
	print_to_98(111);
	print_to_98(81);
	print_to_98(-10);
	return (0);
}
