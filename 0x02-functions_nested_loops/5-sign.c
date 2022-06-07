#include "main.h"
/**
 * print_sign - Determines if the input is greater
 * or less than zero or equal to zero
 * @n: The input number as an integer
 *
 * Return: 1 if greater than zero and 0 if otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
