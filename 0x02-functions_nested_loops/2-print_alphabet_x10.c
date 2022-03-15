#include "_putchar.c"

/**
 * print_alphabet_x10 - prints alphabet
 * description: prints alphabet x10
 * Return: 0
 */
void print_alphabet_x10(void)
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
