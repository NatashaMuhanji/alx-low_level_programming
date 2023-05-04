#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: num one.
 * @m: num two.
 * Return: number of bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int control;

	for (control = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			control++;
	}
	return (control);
}
