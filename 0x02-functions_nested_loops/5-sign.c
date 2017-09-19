#include "holberton.h"
/**
 * print_sign - prints + if n is positive and - if it is negative.
 * @n: Character for variable
 * Prints sign of integer. Prints 0 is if is 0.
 */
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
