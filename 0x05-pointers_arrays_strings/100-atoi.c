#include "main.h"
#include <stdio.h>

int _atoi(char *s)
{
	unsigned int i = 0, z = 0, p = 0;
	unsigned int h = 1, w = 1, n;

	while (s[i])
	{
		if (z > 0 && (s[i] < '0' || s[i] > '9'))
		{
			break;
		}

		if (s[i] == '-')
		{
			h *= -1;
		}

		if ((s[i] >= '0') && (s[i] <= '9'))
		{
			if (z > 0)
			{
				w *= 10;
			}
			z++;
		}
		i++;
	}

	for (n = i - z; n < i; n++)
	{
		p = p + ((s[n] - 48) * w);
		w /= 10;
	}

	return (p * h);
}

int main(void)
{
	int nb;

	nb = _atoi("98");
	printf("%d\n", nb);
	nb = _atoi("-402");
	printf("%d\n", nb);
	nb = _atoi("          ------++++++-----+++++--98");
	printf("%d\n", nb);
	nb = _atoi("214748364");
	printf("%d\n", nb);
	nb = _atoi("0");
	printf("%d\n", nb);
	nb = _atoi("Suite 402");
	printf("%d\n", nb);
	nb = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
	printf("%d\n", nb);
	nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
	printf("%d\n", nb);
	return (0);
}
