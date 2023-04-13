#include "main.h"

/**
 * main -entry point
 * Description: prints the first 50 fibonacci numbers followed by new line
 *
 * Return: always(0) success
*/

int main(void)
{
	int i = 0;
	long int a = 0, b = 1, next;

	while (i < 50)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", next);

		if (i < 49)
		{
			printf(", ");
		}
		i++;
	}
	putchar('\n');
	return (0);
}
